#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0; i<n;i+=2){
            cout<<s[i];
        }
        cout<<s[n-1]<<endl;
    }
}
