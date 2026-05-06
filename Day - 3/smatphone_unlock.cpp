#include <iostream>
using namespace std;

int main()
{
    int passcode;

    do
    {
        cin >> passcode;
    } while (passcode != 1111);

    cout << "Phone Unlocked!";
    return 0;
}