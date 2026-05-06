#include<iostream>
using namespace std;
int main()
{
    int value= 100;
    int*ptr=&value;
    cout<<"value:"<<*ptr<<endl;
    cout<<"address:"<<ptr<<endl;
    *ptr = 200;
    cout<<"value:"<<*ptr<<endl;
    cout<<"value:"<<value<<endl;
    return 0;

}