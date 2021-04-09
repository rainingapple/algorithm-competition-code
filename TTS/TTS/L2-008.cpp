//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool dp[1005][1005];
//int ans = 1;
//int main() {
//	string s;
//	getline(cin, s);
//	for (int i = 0;i < s.size() - 1;i++) {
//		if (s[i] == s[i + 1]) {
//			dp[i][i + 1] = true;
//			ans = max(2, ans);
//		}
//		if (i + 2 < s.size() && s[i] == s[i + 2]) {
//			dp[i][i + 2] = true;
//			ans = max(3, ans);
//		}
//	}
//	for (int k = 4;k <= s.size();k++) {
//		for (int i = 0;i < s.size() - k + 1;i++) {
//			int j = i + k - 1;
//			if (dp[i+1][j-1] && s[i] == s[j]) {
//				dp[i][j] = true;
//				ans = max(k, ans);
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}