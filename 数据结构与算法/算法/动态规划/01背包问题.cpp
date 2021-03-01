#include<iostream>
#include <algorithm>
using namespace std;
const int maxn = 1000;
const int maxv = 100;
int w[maxn];
int v[maxn];
int dp[maxv];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> w[i];
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> v[i];
	}
	fill(dp, dp + n, 0);
	for (int i = 1;i <= n;i++)
	{
		for (int j = m;j >= w[i];j--)
		{
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	int ans = 0;
	for (int i = 1;i <= n;i++)
	{
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}