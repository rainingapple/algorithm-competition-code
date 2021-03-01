//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct moon {
//	double ton;
//	double tp;
//	double per;
//};
//moon a[1005];
//bool cmp(moon m1, moon m2) {
//	return m1.per > m2.per;
//}
//int main() {
//	int n, m;
//	double profit = 0;
//	cin >> n >> m;
//	for (int i = 0;i < n;i++) {
//		cin >> a[i].ton;
//	}
//	for (int i = 0;i < n;i++) {
//		cin >> a[i].tp;
//		a[i].per = a[i].tp / a[i].ton;
//	}
//	sort(a, a + n, cmp);
//	for (int i = 0;i < n;i++) {
//		if (m > a[i].ton) {
//			m -= a[i].ton;
//			profit += a[i].tp;
//		}
//		else {
//			profit += a[i].per * m;
//			break;
//		}
//	}
//	printf("%.2f", profit);
//	return 0;
//}