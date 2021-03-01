/*#include<iostream>
#include <algorithm>
using namespace std;
const int MaxV = 1005;
int a[MaxV];
int dp[MaxV];
int main() {
	int n;
	int ans = a[0];
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	dp[0] = a[0];
	for (int i = 1;i < n;i++)
	{
		dp[i] = max(dp[i - 1] + a[i], a[i]);
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}*/