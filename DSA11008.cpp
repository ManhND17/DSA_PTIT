#include<bits/stdc++.h>
using namespace std;
int d=0;
bool ok;
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
        if(z=='R') root->right=new Node(y);
        }
        else{
            Insert(root->left,x,y,z);
            Insert(root->right,x,y,z);
        }
    }
}
void In_order(Node* root,int check)
{
   if(root!=NULL)
   {
    In_order(root->left,check+1);
    In_order(root->right,check+1);
   }
   else
   {
      if(!d) d=check;
      else if(d!=check){
        ok=false;
        return;
      }
   }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        d=0; ok=true;
        Node* root=NULL;
        for(int i=0;i<n;i++)
        {
            int x,y; char z;
            cin>>x>>y>>z;
            if(root==NULL)
            {
                root=new Node(x);
                if(z=='L') root->left=new Node(y);
                if(z=='R') root->right=new Node(y);
            }
            else Insert(root,x,y,z);
        }
        In_order(root,0);
        if(ok) cout<<"1\n";
        else cout<<"0\n";
    }
}