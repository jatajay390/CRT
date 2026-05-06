#include <iostream>
using namespace std;

int main()
{
    int pin, attempts = 0;

    do
    {
        cin >> pin;
        attempts++;

        if (pin == 1234)
        {
            cout << "Access Granted";
            break;
        }
        else if (attempts < 3)
        {
            cout << "Try Again";
        }
        else
        {
            cout << "Card Blocked";
        }

    } while (attempts < 3);

    return 0;
}