//#include<iostream>
//#include<string.h>
//#include<algorithm>
//#define lowbit(i) ((i)&(-i))
//using namespace std;
//const int maxn = 10005;
//int n;
//int c[maxn];
//int a[maxn];
//struct node {
//	int pos;
//	int val;
//};
//node ori[maxn];
//bool cmp(node n1, node n2) {
//	return n1.val < n2.val;
//}
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
//	for (int i = 0;i < n;i++) {
//		cin >> ori[i].val;
//		ori[i].pos = i;
//	}
//	memset(c, 0, sizeof(c));
//	sort(ori, ori + n, cmp);//sort的时候注意是到n，而不是maxn
//	//这个pos操作，一定小心
//	for (int i = 0;i < n;i++) {
//		if (i == 0 || ori[i].val != ori[i - 1].val) {
//			a[ori[i].pos] = i + 1;
//		}
//		else {
//			a[ori[i].pos] = a[ori[i - 1].pos];
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		update(a[i], 1);
//		cout << getsum(a[i] - 1) << endl;
//	}
//	return 0;
//}