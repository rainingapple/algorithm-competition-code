//#include<iostream>
//#include<string.h>
//#include<algorithm>
//#define lowbit(i) ((i)&(-i))
//using namespace std;
//const int maxn = 10005;
//int n;
//int c[maxn];
//int a[maxn];
//int getsum(int x) {
//	int sum = 0;
//	for (int i = x;i > 0;i -= lowbit(i)) {
//		sum += c[i];
//	}
//	return sum;
//}
//void update(int v, int x) {
//	for (int i = v;i < maxn;i += lowbit(i)) {
//		c[i] += x;
//	}
//}
//int FindKthelement(int k) {
//	int lef = 1, rig = maxn;
//	while (lef < rig) {
//		int mid = (lef + rig) / 2;
//		if (getsum(mid) >= k) {
//			rig = mid;
//		}
//		else {
//			lef = mid + 1;
//		}
//	}
//	return lef;
//}
//int main() {
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		int temp;
//		cin >> temp;
//		update(temp, 1);
//	}
//	cout << FindKthelement(6) << endl;
//	return 0;
//}