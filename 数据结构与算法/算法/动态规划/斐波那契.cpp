/*#include<iostream>
using namespace std;
int dp[1005];
int a[1005];
int F(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else if (dp[n] != -1) {
		return dp[n];
	}
	else {
		dp[n] = a[n - 1] + a[n - 2];
		return dp[n];
	}
}*/