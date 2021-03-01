//#include<iostream>
//#include <algorithm>
//using namespace std;
//int n, mark = 1;
//int a[1005];
//int b[1005];
//bool cmp(int a, int b) {
//	return a < b;
//}
//void preorder(int x) {
//	if (2 * x <= n)
//		preorder(2 * x);
//	b[x] = a[mark++];
//	if (2 * x + 1 <= n)
//		preorder(2 * x + 1);
//}
//int main() {
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		cin >> a[i];
//	}
//	sort(a + 1, a + n + 1, cmp);
//	preorder(1);
//	for (int i = 1;i <= n;i++) {
//		cout << b[i];
//		if (i != n)
//			cout << " ";
//	}
//	return 0;
//}