#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n;
        unordered_set<int> s;
        for(int i=0; i<n; i++){
            cin>>x;
            s.insert(x);
        }
        if(s.size()==n){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
