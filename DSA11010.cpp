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
int d=0; bool check;
void Tree_NPHH(Node* root,int depth)
{
    if(root!=NULL)
    {
       if(root->left==NULL&&root->right!=NULL||root->left!=NULL&&root->right==NULL){
        check=false;
        return;
       }
       Tree_NPHH(root->left,depth+1);
       Tree_NPHH(root->right,depth+1);
    }
    else 
    {
      if(!d) d=depth;
      else if(d!=depth)
      {
        check=false;
        return;
      }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; d=0; check=true;
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
        Tree_NPHH(root,0);
        if(check) cout<<"Yes\n";
        else cout<<"No\n";
    }
}