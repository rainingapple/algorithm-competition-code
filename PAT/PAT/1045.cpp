//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<set>
//using namespace std;
//int fav[205];
//int ori[10005];
//int dp[10005];
//int main() {
//	ios::sync_with_stdio(false);
//	map<int, int> priority;
//	set<int> con;
//	int n;
//	cin >> n;
//	int m;
//	cin >> m;
//	for (int i = 1;i <= m;i++) {
//		cin >> fav[i];
//		priority[fav[i]] = i;
//		con.insert(fav[i]);
//	}
//	int L;
//	cin >> L;
//	for (int i = 1;i <= L;i++) {
//		cin >> ori[i];
//	}
//	int ans = 0;
//	if (con.find(ori[1]) != con.end()) {
//		dp[1] = 1;
//	}
//	else {
//		dp[1] = 0;
//	}
//	for (int i = 2;i <= L;i++) {
//		if (con.find(ori[i]) != con.end()) {
//			int max_len = 1;
//			for (int j = 1;j < i;j++) {
//				if (con.find(ori[j]) != con.end()) {
//					if (priority[ori[i]] >= priority[ori[j]]) {
//						max_len = max(max_len, dp[j] + 1);
//					}
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