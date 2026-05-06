# Auto-Commit System

This repository has an automatic commit system that will commit new folders and changes as you work.

## How it works

The system monitors for:
- New folders (especially Day-* folders)
- Modified files
- Automatically commits and pushes changes

## Usage

### Option 1: Manual Auto-Commit (Recommended)
Run the batch file whenever you want to commit current changes:
```
auto-commit.bat
```

### Option 2: Continuous Monitoring
For continuous monitoring (runs in background):
```powershell
.\auto-commit.ps1 -Continuous
```

### Option 3: One-time commit from PowerShell
```powershell
.\auto-commit.ps1
```

## What gets committed

- New Day folders (Day-1, Day 2, Day-6, etc.)
- Modified C++ files
- Any other changes in the repository

## Notes

- Commits include timestamps for tracking
- Changes are automatically pushed to GitHub
- The system waits 1 minute between automatic commits to avoid spam
- Press Ctrl+C to stop continuous monitoring

## Troubleshooting

If you get execution policy errors, run:
```powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
```