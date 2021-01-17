#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;            //n is Total Number of Papers 
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)   //Taking input for sequence of colors in vector v
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int a=0,b=0,c=0,ans=0;    //a and b stores count of continuous white and black papers respectively
	for(int i=0;i<n;i++)
	{
		if(i-1<0 || v[i-1]!=v[i])   //checking for previous color if they are not same or if it is start then resetting a=1 if present paper is white or b=1 if black
		{
			if(v[i]==1)
				a=1;
			if(v[i]==2)
				b=1;
		}
		else if(v[i-1]==v[i])  //if previous color is same as present then we simply increment a or b  depending on color
		{
			if(v[i]==1)
				a++;
			if(v[i]==2)
				b++;
		}
		c=min(a,b);         // minimum value of a or b forms one half of a possible solution in each iteration
		ans=max(ans,2*c);   // updating ans as we get a longer subset 
	}
	cout<<ans<<endl;
}
