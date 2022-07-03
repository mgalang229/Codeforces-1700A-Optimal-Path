#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		long long ans = (m * (m + 1)) / 2;
		for (int i = 2; i <= n; i++) {
			ans += (m * i);
		}
		cout << ans << '\n';
	}
	return 0;
}
