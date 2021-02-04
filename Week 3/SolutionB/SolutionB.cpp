#include<bits/stdc++.h>
using namespace std;
map<string,string>mip;
int main(){
	int n,m;
	string s,p;
	cin>>n>>m;
	while(n--){
		cin>>s>>p;
		mip[p]=s;
	}
	while(m--){
		cin>>s>>p;
		cout<<s<<" "<<p<<" #"<<mip[p.substr(0,p.length()-1)]<<endl;
	}
}