#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    long long int arr[n], sorted[n], pfs[n], sortedPfs[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        sorted[i]=arr[i];
        if(i==0)
            pfs[i]=arr[i];
        else
            pfs[i]=arr[i]+pfs[i-1];
    }
    sort(sorted, sorted+n);
    for(i=0;i<n;i++){
        if(!i){
            sortedPfs[i]=sorted[i];
        }
        else{
            sortedPfs[i]=sortedPfs[i-1]+sorted[i];
        }
    }
    int m, type;
    cin>>m;
    while(m--){
        cin>>type>>i>>j;
        i--;
        j--;
        if(!i){
            if(type==1){
                cout<<pfs[j];
            }
            else{
                cout<<sortedPfs[j];
            }
        }
        else{
            if(type==1){
                cout<<pfs[j]-pfs[i-1];
            }
            else{
                cout<<sortedPfs[j]-sortedPfs[i-1];
            }
        }
        cout<<endl;
    }
}
