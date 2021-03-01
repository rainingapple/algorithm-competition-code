//#include<iostream>
//#include<map>
//#pragma warning(disable:4996)
//using namespace std;
//int n, m;
//int q[1005];
//map<int, int> ma;
//void fuc1(int a,int b) {
//	int ori = ma[a];
//	ma[a] = ma[a] + b;
//	int now = ma[a];
//	if (b > 0) {
//		for (int i = ori + 1;i <= now;i++) {
//			ma[q[i]]--;
//			q[i - 1] = q[i];
//		}
//	}
//	else {
//		for (int i = ori - 1;i >= now;i--) {
//			ma[q[i]]++;
//			q[i + 1] = q[i];
//		}
//	}
//	q[now] = a;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1;i <= n;i++) {
//		q[i] = i;
//		ma[i] = i;
//	}
//	for (int i = 0;i < m;i++) {
//		int t1, t2;
//		scanf("%d%d", &t1, &t2);
//		fuc1(t1, t2);
//	}
//	for (int i = 1;i <= n;i++) {
//		printf("%d ", q[i]);
//	}
//	return 0;
//}