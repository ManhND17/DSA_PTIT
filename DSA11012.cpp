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
string s1="";
void In_order(Node* root)
{
    if(root!=NULL)
    {
        In_order(root->left);
        s1+=to_string(root->data);
        In_order(root->left);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s2; s1="";
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
        Node* root2=NULL; int m; cin>>m;
        for(int i=0;i<m;i++)
        {
            int x,y; char z;
            cin>>x>>y>>z;
            if(root2==NULL)
            {
                root2=new Node(x);
                if(z=='L') root2->left=new Node(y);
                else root2->right=new Node(y);
            }
            else Insert(root2,x,y,z);
        }
        In_order(root);
        s2=s1; s1="";
        In_order(root2);
        if(s2==s1) cout<<"1\n";
        else cout<<"0\n";
    }
}