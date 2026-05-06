#include<iostream>
using namespace std;
void dis(double &bill)
{
    bill=bill*0.9;
}
int main()
{
    double bill=5500;
    cout<<bill<<endl;
    dis(bill);
    cout<<bill;
}