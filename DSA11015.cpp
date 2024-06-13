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
int ans;
int Sum_max(Node* root)
{
    if(root==NULL)  return 0;
    int l=Sum_max(root->left);
    int r=Sum_max(root->right);
    if(root->left==NULL&&root->right==NULL) {
        return root->data;
    }
    if(root->right==NULL)
    {
       return l+root->data;
    }
    if(root->left==NULL){
        return r+root->data;
    }
    ans=max(ans,root->data+l+r);
    return max(l,r)+root->data;
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
                else root->right=new Node(y);
            }
            else Insert(root,x,y,c);
        }
        ans=-1e9;
        Sum_max(root);
        cout<<ans<<endl;
    }
}