#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void Insert(Node* root,int x)
{
    if(root!=NULL)
    {
        if(root->data>x)
        {
            if(root->left!=NULL) Insert(root->left,x);
            else root->left=new Node(x);
        }
        if(root->data<x)
        {
            if(root->right!=NULL) Insert(root->right,x);
            else root->right=new Node(x);
        }
    }
    else return;
}
void Pre_order(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        Pre_order(root->left);
        Pre_order(root->right);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int l[1001];
        Node* root=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
            if(root==NULL) root=new Node(l[i]);
            else Insert(root,l[i]);
        }
        Pre_order(root);
        cout<<endl;
    }
}