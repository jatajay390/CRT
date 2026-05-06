#include <iostream>
using namespace std;

int main()
{
    const int storedID = 1234;
    const int storedPIN = 5678;

    int id, pin;
    cin >> id >> pin;

    bool access = (id == storedID) && (pin == storedPIN);

    cout << "Access Granted: " << access << endl;
    cout << "Access Denied: " << !access << endl;

    return 0;
}