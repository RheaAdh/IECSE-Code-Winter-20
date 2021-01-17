#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, count=0, x;
    cin>>n;
    vector<int> freq(2*n, -1);
    for(i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }
    for(i=1;i<2*n;i++){
        while(freq[i]>0){
            int f = freq[i];
            freq[i + f] ++;
            count+=f;
            freq[i]--;
        }
    }
    cout<<count<<endl;
}
