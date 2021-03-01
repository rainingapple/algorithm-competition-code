/*#include<iostream>
#include <algorithm>
using namespace std;
const int MaxV = 1005;
int dp[MaxV][MaxV];
int main()
{
	string a, b;
	cin >> a >> b;
	for (int i = 0;i <= a.size();i++) {
		for (int j = 0;j <= b.size();j++) {
			dp[i][j] = 0;
		}
	}
	for (int i = 1;i <= a.size();i++) {
		for (int j = 1;j <= b.size();j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
	}
	cout << dp[a.size()][b.size()];
	return 0;
}*/