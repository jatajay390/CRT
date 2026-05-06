# Auto-commit script for new folders
param(
    [string]$WatchPath = "c:\Users\jataj\.vscode\CRT",
    [switch]$Continuous
)

$gitPath = "C:\Program Files\Git\cmd\git.exe"

function Get-GitStatus {
    $status = & $gitPath status --porcelain 2>$null
    return $status
}

function Add-And-Commit {
    param([string]$message = "Auto-commit: Add new folders")

    # Add all changes
    & $gitPath add . 2>$null

    # Check if there are changes to commit
    $status = Get-GitStatus
    if ($status) {
        # Commit with timestamp
        $timestamp = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
        $commitMessage = "$message - $timestamp"

        & $gitPath commit -m $commitMessage 2>$null

        # Push to remote
        & $gitPath push origin master 2>$null

        Write-Host "Committed and pushed: $commitMessage" -ForegroundColor Green
        return $true
    }
    return $false
}

function Watch-ForChanges {
    param([string]$path)

    Write-Host "Watching for changes in: $path" -ForegroundColor Yellow
    Write-Host "Press Ctrl+C to stop monitoring" -ForegroundColor Yellow

    $lastCommit = Get-Date

    while ($true) {
        Start-Sleep -Seconds 5

        # Check for new folders (Day-* pattern)
        $newFolders = Get-ChildItem -Path $path -Directory | Where-Object {
            $_.Name -match "^Day[-\s]?\d+$" -and $_.CreationTime -gt $lastCommit
        }

        if ($newFolders) {
            Write-Host "New folders detected: $($newFolders.Name -join ', ')" -ForegroundColor Cyan
            $committed = Add-And-Commit "Auto-commit: Add new Day folders"
            if ($committed) {
                $lastCommit = Get-Date
            }
        }

        # Also check for any other changes
        $status = Get-GitStatus
        if ($status -and ((Get-Date) - $lastCommit).TotalMinutes -gt 1) {
            Write-Host "Changes detected, committing..." -ForegroundColor Cyan
            $committed = Add-And-Commit "Auto-commit: General changes"
            if ($committed) {
                $lastCommit = Get-Date
            }
        }
    }
}

# Main execution
Set-Location $WatchPath

if ($Continuous) {
    Watch-ForChanges $WatchPath
} else {
    # One-time commit of current changes
    Write-Host "Performing one-time auto-commit..." -ForegroundColor Yellow
    Add-And-Commit "Auto-commit: Manual trigger"
}