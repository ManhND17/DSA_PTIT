#include<bits/stdc++.h>
using namespace std;
int pre[1001];
int n;
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
   if(root==NULL) return;
}
void Post_order(Node* root)
{
    if(root!=NULL)
    {
        Post_order(root->left);
        Post_order(root->right);
        cout<<root->data<<" ";
    }
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
      cin>>n;
      Node* root=NULL;
      for(int i=1;i<=n;i++)
      {
        cin>>pre[i];
        if(root==NULL) root=new Node(pre[i]);
        else Insert(root,pre[i]);
      }
      Post_order(root);
      cout<<endl;
    }
}