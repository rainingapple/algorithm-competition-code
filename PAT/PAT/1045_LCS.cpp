////这个时LIS
////注意不能用set，因为那个find是O(n),会超时。
////这个不是普通的LCS，是LCS的一个变种
//#include<iostream>
//#include<algorithm>
//#include<set>
//using namespace std;
//int fav[205];
//int ori[10005];
//int dp [205][10005];
//int main() {
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	int m;
//	cin >> m;
//	for (int i = 1;i <= m;i++) {
//		cin >> fav[i];
//	}
//	int L;
//	cin >> L;
//	for (int i = 1;i <= L;i++) {
//		cin >> ori[i];
//	}
//	fill(dp[0], dp[0] + 205 * 10005,0);
//	for (int i = 1;i <= m;i++) {
//		for (int j = 1;j <= L;j++) {
//			if (fav[i] == ori[j]) {
//				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + 1;
//			}
//			else {
//				dp[i][j]= max(dp[i][j - 1], dp[i - 1][j]);
//			}
//		}
//	}
//	cout << dp[m][L];
//	return 0;
//}