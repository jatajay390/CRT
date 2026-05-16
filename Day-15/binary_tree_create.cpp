#include<iostream>
using namespace std;
class treeNode
{
    public:
    int data;
    treeNode* left;
    treeNode* right;
    treeNode(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
int main()
{
    treeNode* t1=new treeNode(1);
    t1->left=new treeNode(2);
    t1->right=new treeNode(3);
    t1->left->left=new treeNode(4);
    t1->left->right=new treeNode(5);
    t1->right->left=new treeNode(6);
    cout<<"Root: "<<t1->data<<endl;
    cout<<"Left child of root: "<<t1->left->data<<endl;
    cout<<"Right child of root: "<<t1->right->data<<endl;
    return 0;
}