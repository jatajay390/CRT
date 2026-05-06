#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        if (age >= 100)
        {
            cout << "Eligible to vote (Centenarian category)\n";
        }
        else
        {
            cout << "Eligible to vote\n";
        }
    }
    else
    {
        if (age < 0)
        {
            cout << "Invalid age\n";
        }
        else
        {
            cout << "Not eligible to vote\n";
        }
    }

    return 0;
}