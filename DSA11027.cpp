#include<bits/stdc++.h>
using namespace std;
int dem=0;
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
Node* Insert(int a[],int l,int r)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        Node* p=new Node(a[mid]);
        p->left=Insert(a,l,mid-1);
        p->right=Insert(a,mid+1,r);
        return p;
    }
    else return NULL;
}
void Node_la(Node* root)
{
    if(root!=NULL)
    {
        if(root->left==NULL&&root->right==NULL) dem++;
        Node_la(root->left);
        Node_la(root->right);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        Node* root=Insert(a,1,n);
        dem=0; Node_la(root);
        cout<<dem<<endl;
    }
}