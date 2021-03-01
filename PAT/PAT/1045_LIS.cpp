////这个时LIS
////注意不能用set，因为那个find是O(n),会超时。
//#include<iostream>
//#include<algorithm>
//#include<set>
//using namespace std;
//int fav[205];
//int priority[205];
//int ori[10005];
//int dp[10005];
//int main() {
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	for (int i = 1;i <= 203;i++) {
//		priority[i] = -1;
//	}
//	int m;
//	cin >> m;
//	for (int i = 1;i <= m;i++) {
//		cin >> fav[i];
//		priority[fav[i]] = i;
//	}
//	int L;
//	cin >> L;
//	for (int i = 1;i <= L;i++) {
//		cin >> ori[i];
//	}
//	if (priority[ori[1]]!=-1) {
//		dp[1] = 1;
//	}
//	else {
//		dp[1] = 0;
//	}
//	int ans = dp[1];
//	for (int i = 2;i <= L;i++) {
//		if (priority[ori[i]] != -1) {
//			int max_len = 1;
//			for (int j = 1;j < i;j++) {
//				if (priority[ori[i]] >= priority[ori[j]]) {
//					max_len = max(max_len, dp[j] + 1);
//				}
//			}
//			dp[i] = max_len;
//			ans = max(ans, dp[i]);
//		}
//		else {
//			dp[i] = 0;
//		}
//	}
//	cout << ans;
//	return 0;
//}