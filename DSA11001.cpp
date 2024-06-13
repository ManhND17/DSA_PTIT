#include<bits/stdc++.h>
using namespace std;
struct Node{
    char data;
    Node* left;
    Node* right;
    Node(char x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
Node* Creat_Node(char c)
{
    Node* p=new Node(c);
    return p;
}
void inoder(Node* root)
{
    if(root!=NULL)
    {
        inoder(root->left);
        cout<<root->data;
        inoder(root->right);
    }
}
main()
{
    int t; cin>>t; cin.ignore();
    while(t--)
    {
        string s; getline(cin,s);
        stack<Node*> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
            {
                Node* tmp=new Node(s[i]);
                tmp->right=st.top(); st.pop();
                tmp->left=st.top(); st.pop();
                st.push(tmp);
            }
            else st.push(Creat_Node(s[i]));
        }
        inoder(st.top());
        cout<<endl;
    }
}