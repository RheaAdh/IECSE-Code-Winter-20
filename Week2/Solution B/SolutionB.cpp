#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<0<<endl;
    }
    else
    {
        if(n%4==0)
        {
            cout<<(n/4)-1<<endl;
        }
        else
        {
            cout<<n/4<<endl;
        }
    }
}
	