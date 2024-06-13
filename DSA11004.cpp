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
Node* create_Node(int x)
{
    Node* p=new Node(x);
    return p;
}
void level_order(Node* root)
{
    queue<Node*> qe;
    qe.push(root);
    while(qe.size())
    {
        Node *nd=qe.front(); qe.pop();
        cout<<nd->data<<" ";
        if(nd->left!=NULL) qe.push(nd->left);
        if(nd->right!=NULL) qe.push(nd->right); 
    }
}
void insert(Node* root,int n1,int n2,char c)
{
    if(root==NULL) return;
    if(root->data==n1)
        {
            if(c == 'L') root->left = new Node(n2);
            else root->right = new Node(n2);
        }
    else{
         insert(root->left,n1,n2,c);
         insert(root->right,n1,n2,c);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        Node* root=NULL;
        for(int i=0;i<n;i++)
        {
            int x,y; char c;
            cin>>x>>y>>c;
            if(root==NULL)
            {
            root=new Node(x);
            if(c=='L') root->left=new Node(y);
            if(c=='R') root->right=new Node(y);
            }
            else{
              insert(root,x,y,c);
            }
        }
        level_order(root);
        cout<<endl;
    }
}