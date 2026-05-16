#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
Node* createtree()
{
    int x;
    cout<<"enter data(-1 to NULL):";
    cin>>x;
    if(x == -1)
    {
        return NULL;
    }
    Node* newNode=new Node(x);
    cout<<"enter left child of "<<x<<endl;
    newNode->left=createtree();
    cout<<"enter right child of "<<x<<endl;
    newNode->right=createtree();
    return newNode;
}
    void preorder(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
        void inorder(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
        void postorder(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
int main()
{
    Node* root=createtree();
    cout<<"preorder traversal:";
    preorder(root);
    cout<<"\ninorder traversal:";
    inorder(root);
    cout<<"\npostorder traversal:";
    postorder(root);
    return 0;
}