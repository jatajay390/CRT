
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int max_val = (a > b) ? a : b;
    cout << max_val;

    return 0;
}