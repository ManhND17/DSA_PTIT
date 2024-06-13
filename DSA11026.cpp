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
Node* Build_Tree_AVL(int a[],int l,int r)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        Node* p=new Node(a[mid]);
        p->left=Build_Tree_AVL(a,l,mid-1);
        p->right=Build_Tree_AVL(a,mid+1,r);
        return p;
    }
    return NULL;
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
        Node* root=Build_Tree_AVL(a,1,n);
        Post_order(root);
        cout<<endl;
    }
}