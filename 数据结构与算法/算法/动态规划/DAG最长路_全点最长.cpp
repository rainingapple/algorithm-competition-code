/*#include<iostream>
#include <algorithm>
using namespace std;
const int INF = 1000000000;
int G[1005][1005];
int dp[1005];
int next_p[1005];
int n, m;
int main()
{
	fill(dp, dp + 1005, 0);
	fill(next_p, next_p + 1005, -1);
	return 0;
}
int DP(int i)
{
	if (dp[i] != 0)
		return dp[i];
	for (int j = 0;j < n;j++)
	{
		if (G[i][j] != INF)
		{
			int temp = DP(j) + G[i][j];
			if (temp > dp[i])
			{
				dp[i] = temp;
				next_p[i] = j;
			}
		}
	}
	return dp[i];
}
void show_path(int i)
{
	cout << i;
	while (next_p[i] != -1)
	{
		i = next_p[i];
		cout << i;;
	}
}*/