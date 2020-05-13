#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
#include <set>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int ans = 0;
	while (n >= 2) {
		int sum = 0;
		int v = 0;
		int h = 1;
		while (sum + 2 * h + (h - 1) <= n) {
			sum = sum + 2 * h + (h - 1);
			h++;
		}
		ans++;
		n = n - sum;

	}
	cout << ans << endl;
	

}

int main() {
	int t; cin >> t;
	while (t--)
		solve();
}