#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
   ll n,m,a[200001],b[200001],i,j,sum=0;
   cin>>n>>m;
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
       a[i]+=a[i-1];
   }
   for(i=0;i<m;i++)
   {
       cin>>b[i];
   }
   i=1;
   a[0]=0;
   for(j=0;j<m;j++)
   {
       while(a[i]<b[j])
       {
           i++;
       }
       cout<<i<<" "<<b[j]-a[i-1]<<endl;
       
   }
}
// powers of 2, 3, 5, ..except those everything 