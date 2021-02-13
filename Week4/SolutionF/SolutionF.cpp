#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, m, x, y, i, j;
    cin>>n>>m>>x>>y;
    long long int a[n], b[m];
    for(i=0; i<n; i++) cin>>a[i];
    for(j=0; j<m; j++) cin>>b[j];
    i=0; j=0;
    vector<vector<long long int>> v;
    while(i < n && j < m){
        if(b[j]>=a[i]-x && b[j]<= a[i] + y){
            v.push_back( {i+1, j+1} );
            i++;
            j++;
        }
        else if(b[j] > a[i]-x) i++;
        else j++;
    }
    cout<<v.size()<<endl;
    for(i=0; i<v.size(); i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
}
