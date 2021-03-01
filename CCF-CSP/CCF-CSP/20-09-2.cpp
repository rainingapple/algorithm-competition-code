//#include<iostream>
//using namespace std;
//int main() {
//	int n, k, t, x1, x2, y1, y2;
//	int ans1 = 0, ans2 = 0;
//	cin >> n >> k >> t >> x1 >> y1 >> x2 >> y2;
//	for (int i = 0;i < n;i++) {
//		int flag = false;
//		int count = 0;
//		int max_count = 0;
//		for (int j = 0;j < t;j++) {
//			int x, y;
//			cin >> x >> y;
//			if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
//				flag = true;
//				count++;
//				if (count > max_count)
//					max_count = count;
//			}
//			else {
//				count = 0;
//			}
//		}
//		if (flag)
//			ans1++;
//		if (max_count >= k)
//			ans2++;
//	}
//	cout << ans1 << endl;
//	cout << ans2;
//	return 0;
//}