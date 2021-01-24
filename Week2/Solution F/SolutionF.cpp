#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n, ans = 0;
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		ans += pow(2, i);
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}
