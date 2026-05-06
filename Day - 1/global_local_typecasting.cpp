#include <iostream>
using namespace std;

int globalValue = 100;

int main()
{
    int userInput;
    double result;

    cin >> userInput;

    result = (double)globalValue / userInput;

    cout << result << endl;
    return 0;
}