/*#include<iostream>
#include <algorithm>
using namespace std;
const int MaxV = 1005;
int a[MaxV];
int dp[MaxV];
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	dp[0] = 1;
	int ans = 1;
	for (int i = 1;i < n;i++) {
		int temp = 1;
		for (int j = 0;j <= i;j++) {
			if (a[j] <= a[i]) {
				temp = max(temp, dp[j] + 1);
			}
		}
		dp[i] = temp;
		ans = max(dp[i], ans);
	}
	cout << ans;
	return 0;
}*/