#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, count=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(i=1;i<n;i++){
        if(arr[i-1]>=arr[i]){
		count+= arr[i-1]+1 - arr[i];
		arr[i]=arr[i-1]+1;
	}
    }
    cout<<count<<endl;
}
