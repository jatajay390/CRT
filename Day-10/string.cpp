
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = "Jecrc";

    cout << str1 << " " << str2 << endl;

    int n = str1.length();
    cout << "Length of string is: " << n << endl;

    // append() method
    cout << "After appending string is: " 
         << str1.append(" student") << endl;

    // concatenation
    cout << "After concatenation of string is: " 
         << str1 + " bacho" << endl;

    cout << "String str1 is now: " << str1 << endl;

    // check empty
    cout << "Is string empty: " << str2.empty() << endl;

    
    str2.push_back('u');
    cout << "After push_back() method: " << str2 << endl;

    str2.pop_back();
    cout << "After pop_back() method: " << str2 << endl;

    
    int index = str1.find("student");
    cout << "Index of 'student' in str1: " << index << endl;

    char ch = str1.at(1);
    cout << "Character at index 1 in str1: " << ch << endl;

    str1.swap(str2);

    cout << "After swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}
