#include <iostream>
using namespace std;

int main() {
    string str = "ajay";
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    cout << "Length = " << i;

    return 0;
}