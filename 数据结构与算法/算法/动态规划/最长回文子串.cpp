/*#include<iostream>
using namespace std;
char s[1005];
int dp[1005][1005];
int n;
int ans = 1;
int main()
{
	for (int i = 1;i <= n;i++)
	{
		dp[i][i] = 1;
		if (i != n && s[i] == s[i + 1]) {
			dp[i][i + 1] = 1;
			ans = 2;
		}
	}
	for (int L = 3;L <= n;L++)
	{
		for (int i = 1;i <= n-L+1;i++)
		{
			int j = i + L - 1;
			if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
			{
				dp[i][j] = 1;
				ans = L;
			}
		}
	}
	return 0;
}*/