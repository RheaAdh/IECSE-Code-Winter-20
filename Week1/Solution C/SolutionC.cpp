#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, k;
    cin>>n>>k;
    int t = 240-k;
    int low = 0, high = n, mid;
    while(low < high){
        mid = low + (high - low + 1)/2;
        if(5 * mid * (mid+1)/2 <= t){ // Find sum for a given value of mid using sum of first n natural numbers formula
            low = mid;                // if the sum is less than or equal to t, there is no use checking for elements before this index
        }
        else high = mid-1;            // if sum is greater than t, the solution can't exist at this index or beyond this index
    }
    cout<<low<<endl;

}

