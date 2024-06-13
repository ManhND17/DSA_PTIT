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
    if(root==NULL) return;
    else{
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
}
int ans=0;
void In_order(Node* root,int depth)
{
    if(root!=NULL)
    {
        if(root->left!=NULL||root->right!=NULL) ans=max(ans,depth);
        In_order(root->left,depth+1);
        In_order(root->right,depth+1);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int P[1001];
        Node* root=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>P[i];
            if(root==NULL) root=new Node(P[i]);
            else Insert(root,P[i]);
        }
        ans=0;
        In_order(root,1);
        cout<<ans<<endl;
    }
}