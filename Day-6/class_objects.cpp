#include<iostream>
using namespace std;
class students
{
public:
string name;
 int roll_no;
 void show()
{
    cout<<"name"<<name<<endl;
    cout<<"roll number"<<roll_no<<endl;
}
};
int main(){
    students s1;
    s1.name = "ajay";
    s1.roll_no = 18;
s1.show();
return 0;
}
