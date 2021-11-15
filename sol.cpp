#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		string s;
		cin >> s;
		int n = s.size();
		int cnt = 0;
		int best = 0;
		// find the longest streak of 1s
		for (int i = 0; i < n; i++) {
			cnt += (s[i] == '1');
			if (s[i] == '0') {
				best = max(best, cnt);
				cnt = 0;
			}
		}
		best = max(best, cnt);
		// get the total regular pay by multiply 'x' with the total no. of 1s
		// and add it to the days of the longest streak multiplied to the bonus
		// of each day that belongs to that longest streak of days
		cout << (count(s.begin(), s.end(), '1') * 1LL * x) + (best * 1LL * y) << '\n';
	}
	return 0;
}
