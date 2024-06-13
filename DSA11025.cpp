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
Node* Build_AVL(int a[],int l,int r)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        Node* p=new Node(a[mid]);
        p->left=Build_AVL(a,l,mid-1);
        p->right=Build_AVL(a,mid+1,r);
        return p;
    }
    else return NULL;
}
void Preorder(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int v[n+1];
        Node* root=NULL;
        for(int i=1;i<=n;i++) cin>>v[i];
        sort(v+1,v+n+1);
        root=Build_AVL(v,1,n);
        Preorder(root);
        cout<<endl;
    }
}