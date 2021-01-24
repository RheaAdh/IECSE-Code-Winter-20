#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans = 0, c = 0;
    cin >> n;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false; //marking as composite
    vector<int> count(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true) //i is prime
            for (int j = 2; i * j <= n; j++)
            {
                prime[i * j] = false;
                count[i * j]++;
            }
    }
    for (auto x : count)
    {
        if (x == 2)
            c++;
    }
    cout << c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
