#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, c = 0;
    cin >> n >> k;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false; //marking as composite
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i; j * i <= n; j++)
        {
            prime[i * j] = false;
        }
    }
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        if (prime[i] == true)
        {
            v.push_back(i);
        }
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (prime[v[i - 1] + v[i] + 1] == true&&(v[i - 1] + v[i] + 1)<=n)
        {
            c++;
        }
    }
    if (c >= k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
