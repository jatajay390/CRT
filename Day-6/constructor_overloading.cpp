#include <iostream>
using namespace std;

class students
{
public:
    int roll_no;
    string name;
    
    students()
    {
        roll_no = 0;
        name = "Your Name Please";
    }
    

    students(int r, string name)
    {
        roll_no = r;
        this->name = name;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main()
{
    students s1;
    s1.show();
    students s2(18, "Ajay");
    s2.show();
    return 0;
}