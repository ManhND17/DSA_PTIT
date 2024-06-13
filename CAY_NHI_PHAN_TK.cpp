#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   Node *left, *right;
};
void Init(Node* &root)
{
    root=NULL;
}
// Them la vao cay nhi phan tim kiem:
void Insert(Node* &root,int x)
{
    if(root==NULL)
    {
        Node *p=new Node;
        p->data=x;
        p->left=NULL;
        p->right=NULL;
    }
    else{
        if(root->data>x)
        {
            Insert(root->left,x);
        }
        else if(root->data<x)
        {
            Insert(root->right,x);
        }
    }
}
// Ham xuat cay nhi phan theo NLR
void Duyet_NLR(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        Duyet_NLR(root->left);
        Duyet_NLR(root->right);
    }
}
void Duyet_NRL(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data;
        Duyet_NRL(root->right);
        Duyet_NRL(root->left);
    }
}
// Ham xuat cay nhi phan theo LNR
void Duyet_LNR(Node* root)
{
    if(root!=NULL)
    {
        Duyet_LNR(root->left);
        cout<<root->data;
        Duyet_LNR(root->right);
    }
}
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);

    }
}