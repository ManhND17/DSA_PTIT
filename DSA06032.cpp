#include<bits/stdc++.h>
using namespace std;
main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long dem=0;
        for(int i=0;i<n-2;i++)
        {
            long long left=i+1,right=n-1;
            while(a[left]<a[right]){
                long long ans=a[i]+a[left]+a[right];
                if(ans<k){
                    dem+=right-left;
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        cout<<dem<<endl;
    }
}