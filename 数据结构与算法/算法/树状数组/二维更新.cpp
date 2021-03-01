//#include<iostream>
//#include<string.h>
//#include<algorithm>
//#define lowbit(i) ((i)&(-i))
//using namespace std;
//const int maxn = 10005;
//int n;
//int c[maxn][maxn];
//int a[maxn][maxn];
//int getsum(int x,int y) {
//	int sum = 0;
//	for (int i = x;i > 0;i -= lowbit(i)) {
//		for (int j = y;j > 0;j -= lowbit(j)) {
//			sum += c[i][j];
//		}
//	}
//	return sum;
//}
//void update(int v1,int v2, int x) {
//	for (int i = v1;i < maxn;i += lowbit(i)) {
//		for (int j = v2;j < maxn;j += lowbit(j)) {
//			c[i][j] += x;
//		}
//	}
//}