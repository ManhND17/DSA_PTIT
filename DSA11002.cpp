#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int n;
struct Node{
    string data;
    Node* left;
    Node* right;
    Node(string t)
    {
        data=t;
        left=NULL;
        right=NULL;
    }
};
Node* creat_Node(string x)
{
    Node* p=new Node(x);
    return p;
}
int Union(Node* root)
{
    if(root!=NULL)
    {
        Union(root->left);
        cout<<root->data;
        Union(root->right);
    }
}
Node* buildTree(Node* r, int i) {
	if (i < n) {
		r = creat_Node(v[i]);
		r->left = buildTree(r->left, i * 2 + 1);
		r->right = buildTree(r->right, i * 2 + 2);
	}

	return r;
}

string operation = "+-*/";
int Calc(Node* root)
{
    if(root!=NULL)
    {
    if(operation.find(root->data[0])==string::npos)
    {
       return stoi(root->data);
    }
    else
    {
      if(root->data[0]=='+') return Calc(root->left) + Calc(root->right);
      else if(root->data[0]=='-') return Calc(root->left) - Calc(root->right);
      else if(root->data[0]=='*') return Calc(root->left) * Calc(root->right);
      else if(root->data[0]=='/') return Calc(root->left) / Calc(root->right);
    }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
      cin>>n;
      v.resize(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
      }
      Node* root=NULL;
      root=buildTree(root,0);
      queue<Node*> qe;
      for(int i=n-1;i>=0;i--)
      {
        if(v[i]=="+"||v[i]=="-"||v[i]=="*"||v[i]=="/")
        {
            Node* tmp=new Node(v[i]);
            tmp->right=qe.front(); qe.pop();
            tmp->left=qe.front(); qe.pop();
            qe.push(tmp);
        }
        else{
            qe.push(creat_Node(v[i]));
        }
      }
      root=qe.front();
      cout<<Calc(root)<<endl;
    }
}