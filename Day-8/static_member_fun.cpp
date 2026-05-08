#include<iostream>
using namespace std;
class student{
    public:
    static int reg_no;
    student(){
        reg_no++;
    }
static void showregno()
{
    cout<<"registration number:"<< reg_no <<endl;
}
};
int student:: reg_no = 252;
int main(){
    student s1;
    student s2;
    student s3;
    student::showregno();
    student s4;
    student::showregno();
    return 0;
}