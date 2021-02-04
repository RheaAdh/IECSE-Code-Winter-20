#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    map<ll,ll>m1;
    ll n,l,i,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        m1[l]++;
        ans=max(ans,m1[l]);
    }
    cout<<ans<<endl;
    
   
}