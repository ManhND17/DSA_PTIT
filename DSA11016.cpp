#include<bits/stdc++.h>
using namespace std;
vector<int> v;
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
void Insert(Node* root,int x,int y, char c)
{
    if(root==NULL) return;
    if(root->data==x)
    {
        if(c=='L') root->left=new Node(y);
        else root->right=new Node(y);
    }
    else {
        Insert(root->left,x,y,c);
        Insert(root->right,x,y,c);
    }
}
void Store(Node* root)
{
    if(root!=NULL)
    {
        Store(root->left);
        v.push_back(root->data);
        Store(root->right);
    }
}
void Change(Node* root,int& idx)
{
    if(root!=NULL)
    {
    Change(root->left,idx);
    root->data=v[idx++];
    Change(root->right,idx);
    }
}
Node* Tree_NPTK(Node* root)
{
    if(root==NULL) return root;
    Store(root);
    sort(v.begin(),v.end());
    int idx=0;
    Change(root,idx);
    return root;
}
void In_order(Node* root)
{
   if(root!=NULL)
   {
    In_order(root->left);
    cout<<root->data<<" ";
    In_order(root->right); 
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        Node* root=NULL;
        v.clear();
        for(int i=0;i<n;i++)
        {
            int x,y; char c;
            cin>>x>>y>>c;
            if(root==NULL) 
            {
                root=new Node(x);
                if(c=='L') root->left=new Node(y);
                else root->right=new Node(y);
            }
            else Insert(root,x,y,c);
        }
        root=Tree_NPTK(root);
        In_order(root);
        cout<<endl;
    }
}