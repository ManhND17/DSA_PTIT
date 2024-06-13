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
void spiral_order(Node* root)
{
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(st1.size()||st2.size())
    {
        while(st1.size())
        {
            Node* p=st1.top(); st1.pop();
            cout<<p->data<<" ";
            if(p->right!=NULL) st2.push(p->right);
            if(p->left!=NULL) st2.push(p->left);
        }
        while(st2.size())
        {
            Node* p=st2.top(); st2.pop();
            cout<<p->data<<" "; 
            if(p->left!=NULL) st1.push(p->left);
            if(p->right!=NULL) st1.push(p->right);
        }
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
           int x,y; char z; cin>>x>>y>>z;
           if(root==NULL){
               root=new Node(x);
               if(z=='L') root->left=new Node(y);
               else root->right=new Node(y);
           }
           else Insert(root,x,y,z);
        }
        spiral_order(root);
        cout<<endl;
    }
}