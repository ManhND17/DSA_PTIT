#include<bits/stdc++.h>
using namespace std;
vector<int> postorder;
int inorder[1001];
int preorder[1001];
unordered_map<int,int> mp;
void get_postorder(int preleft,int preright,int inleft,int inright)
{
    if(preleft>preright) return;
    int root=preorder[preleft];
    postorder.push_back(root);
    if(preleft==preright) return;
    else{
        int cntleft=mp[root]-inleft;
        int cntright=inright-mp[root];
        get_postorder(preleft+cntleft+1,preright,mp[root]+1,inright);
        get_postorder(preleft+1,preright-cntright,inleft,mp[root]-1);
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
      int n; cin>>n; mp.clear(); postorder.clear();
      for(int i=1;i<=n;i++) 
      {
        cin>>inorder[i];
        mp[inorder[i]]=i;
      }
      for(int i=1;i<=n;i++) cin>>preorder[i];
      get_postorder(1,n,1,n);
      for(int i=postorder.size()-1;i>=0;i--)
      {
        cout<<postorder[i]<<" ";
      }
      cout<<endl;
    }
}