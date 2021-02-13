#include<iostream>
using namespace std;
int main()
{
	int t,n,b[300],i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int j=n-1;
	    for(i=0;i<n;i++)
	    {
	        cout<<b[i]<<" ";
	        if(i!=j)
	        cout<<b[j]<<" ";
	        
	        if(i==j || i+1==j)
	        {
	            break;
	        }
	        j--;
	    }
	    cout<<endl;
	}
} 