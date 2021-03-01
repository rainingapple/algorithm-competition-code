/*#include<iostream>
#include <algorithm>
using namespace std;
const int INF = 1000000000;
int G[1005][1005];
int dp[1005];
bool vis[1005];
int n, m;
int main()
{
	fill(dp, dp + 1005, -100000000);
	dp[1000] = 0;//÷’µ„…Ë÷√Œ™0£ª
	fill(vis, vis + 1005, false);
	return 0;
}
int DP(int i)
{
	if (vis[i])
		return dp[i];
	vis[i] = true;
	for (int j = 0;j < n;j++)
	{
		if (G[i][j] != INF)
		{
			dp[i] = max(dp[i], DP(j) + G[i][j]);
		}
	}
	return dp[i];
}*/