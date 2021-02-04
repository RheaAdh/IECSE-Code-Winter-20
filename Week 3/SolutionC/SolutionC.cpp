#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    map<ll,ll> m1;
    ll n,a[100],i,l,count=0,maxi=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l;
        m1[l]++;
    }
    ll y = 0;
	for ( i=1;i<=100;i++){
		y += m1[i]/2;
	}
	cout<<y/2<<endl;
   
   
}