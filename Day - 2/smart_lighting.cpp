#include <iostream>
using namespace std;

int main()
{
    string time;
    bool motion;

    cin >> time >> motion;

    if (time == "Night" || time == "night")
    {
        if (motion)
            cout << "Full Brightness";
        else
            cout << "Dim Mode";
    }
    else
    {
        cout << "Lights OFF";
    }

    return 0;
}