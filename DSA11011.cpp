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
void Insert(Node* root,int x,int y,char z)
{
    if(root==NULL) return;
    else{
        if(root->data==x)
        {
            if(z=='L') root->left=new Node(y);
            else root->right=new Node(y);
        }
        else{
            Insert(root->left,x,y,z);
            Insert(root->right,x,y,z);
        }
    }
}
bool check;
void Tree_NPDD(Node* root)
{
    if(root!=NULL)
    {
       if(root->left==NULL&&root->right!=NULL||root->left!=NULL&&root->right==NULL){
        check=false;
        return;
       }
       Tree_NPDD(root->left);
       Tree_NPDD(root->right);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; check=true;
        Node* root=NULL;
        for(int i=0;i<n;i++)
        {
            int x,y; char z;
            cin>>x>>y>>z;
            if(root==NULL)
            {
                root=new Node(x);
                if(z=='L') root->left=new Node(y);
                else root->right=new Node(y);
            }
            else Insert(root,x,y,z);
        }
        Tree_NPDD(root);
        if(check) cout<<"1\n";
        else cout<<"0\n";
    }
}