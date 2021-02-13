#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n, i, j, res=0, sum1=0, sum3=0;
   cin>>n;
   long long int arr[n];
   for(i=0;i<n;i++) {
        cin>>arr[i];
   }
   i=0; j=n-1;
   while(i<=j){
    if(sum1<sum3){
        sum1+=arr[i++];
    }
    else if(sum1>sum3){
        sum3+=arr[j--];
    }
    else{
        res=sum1;
        sum1+=arr[i];
        i++;
    }
    //cout<<sum1<<" "<<sum3<<endl;
   }
   if(sum1==sum3) res=sum1;
   cout<<res<<endl;

}

