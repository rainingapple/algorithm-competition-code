////注意index开全局，可以省略大量运算
//#include<iostream>
//#include<map>
//using namespace std;
//int m[100005];
//int main() {
//	ios::sync_with_stdio(false);
//	int n, ans = 0;
//	int index = 1;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> m[i];
//	}
//	while (true) {
//		while (m[0] != 0) {
//			int temp = m[0];
//			swap(m[0], m[temp]);
//			ans++;
//		}
//		bool flag = false;
//		for (;index < n;index++) {
//			if (m[index] != index) {
//				swap(m[0], m[index]);
//				flag = true;
//				ans++;
//				break;
//			}
//		}
//		if (flag == false) {
//			break;
//		}
//	}
//	cout << ans;
//	return 0;
//}