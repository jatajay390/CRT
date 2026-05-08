#include<iostream>
using namespace std;
namespace Ajay{
    void show(){
        cout<<"Ajay is the best coder in the world"<<endl;

    }
}
namespace Yash{
    void show(){
        cout<<"Yash is the best coder in the world"<<endl; 
    }
}
int main()
{
    Ajay::show();
    Yash::show();
    return 0;
}