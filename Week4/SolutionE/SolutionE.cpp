#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
   ll n,a[100],b[100],i,c=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==0)
       {
           b[i]=1;
       }
       else
       {
           b[i]=-1;
           c++;
       }
   }
   if(c==n)
   {
       cout<<n-1<<endl;
   }
   else
   {
       ll max_nu=0,max_so_far=0,ans=0;
       for(i=0;i<n;i++)
       {
           max_nu=max_nu+b[i];
           if(max_nu<0)
           {
               max_nu=0;
           }
           if(max_so_far<max_nu)
           {
               max_so_far=max_nu;
           }
           if(ans<(max_so_far+c))
           {
               ans=max_so_far+c;
           }
       }
       cout<<ans<<endl;
   }
   
   

}