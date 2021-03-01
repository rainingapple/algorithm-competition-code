//#include<iostream>
//#include<string.h>
//#define lowbit(i) ((i)&(-i))
//using namespace std;
//const int maxn = 10005;
//int n;
//int c[maxn];
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
//int main() {
//	cin >> n;
//	memset(c, 0, sizeof(c));
//	for (int i = 0;i < n;i++) {
//		int temp;
//		cin >> temp;
//		update(temp, 1);
//		cout << getsum(temp - 1) << endl;
//	}
//	return 0;
//}