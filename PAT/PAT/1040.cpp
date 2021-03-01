//#include<iostream>
//#include<algorithm>
//#include <string>
//using namespace std;
//bool a[1005][1005];
//int main() {
//	int ans = 1;
//	fill(a[0], a[0] + 1005 * 1005, false);
//	string s;
//	getline(cin, s);
//	int n = s.size();
//	for (int i = 0;i < n - 1;i++) {
//		if (s[i] == s[i + 1]) {
//			ans = max(ans, 2);
//			a[i][i + 1] = true;
//		}
//		if (i < n - 2 && s[i] == s[i + 2]) {
//			ans = max(ans, 3);
//			a[i][i + 2] = true;
//		}
//	}
//	for (int k = 4;k <= n;k++) {
//		for (int i = 0;i < n - k + 1;i++) {
//			if (a[i + 1][i + k - 2] == true && s[i] == s[i + k - 1]) {
//				ans = max(ans, k);
//				a[i][i + k - 1] = true;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}