#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int res =1;
    while(res < m && n!=0){
        res*=2;
        n--;
    }
    if(n){
        cout<<m<<endl;
    }
    else {
        cout<<m%res<<endl;
    }
}
