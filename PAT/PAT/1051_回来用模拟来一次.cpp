//#include<iostream>
//using namespace std;
//int m, n, k;
//void check() {
//	int a[1005];
//	for (int j = 0;j < n;j++) {
//		cin >> a[j];
//	}
//	for (int j = 0;j < n;j++) {
//		int flag = a[j];
//		int pre = 100000;
//		int sum = 0;
//		for (int k = j + 1;k < n;k++) {
//			if (a[k] < flag) {
//				if (a[k] > pre) {
//					cout << "NO" << endl;
//					return;
//				}
//				else {
//					pre = a[k];
//					sum++;
//					if (sum > m - 1) {
//						cout << "NO" << endl;
//						return;
//					}
//				}
//			}
//		}
//	}
//	cout << "YES" << endl;
//}
//int main() {
//	cin >> m >> n >> k;
//	for (int i = 0;i < k;i++) {
//		check();
//	}
//	return 0;
//}