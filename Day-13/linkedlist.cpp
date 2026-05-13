#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    node* n1 = new node(10);
    node* n2 = new node(20);
   node* third = new node(30);
   node* head = n1;
    n1->next = n2;
    n2->next = third;
   node* temp = head;
   while(temp != NULL)
   {
       cout<<temp->data<<" ";
       temp = temp->next;
   }
    return 0;
}