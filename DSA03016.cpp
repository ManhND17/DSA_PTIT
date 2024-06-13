#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        int s,d; cin>>s>>d;
        int x=d;
        if(s==0&&d==1) cout<<0<<endl;
        else{
            if(s<=d*9&&s!=0)
            {
                string ans="";
                for(int i=1;i<=d;i++)
                {
                    for(int j=9;j>=1;j--)
                    {
                        if(s-j<=(d-i)*9&&(s-j>=1))
                        {
                            ans=to_string(j)+ans;
                            s-=j;
                            break;
                        }
                    }
                }
            if(s)
            {
                while(ans.size()+1<=x-1) ans="0"+ans;
                ans=to_string(s)+ans;
            }
            cout<<ans<<endl;
            }
            else cout<<"-1\n";
        }

    }
}