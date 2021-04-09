//#include<iostream>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//struct mooncake {
//	double price;
//	double colume;
//	double per_price;
//};
//int N, D;
//double ans = 0;
//mooncake clist[1005];
//bool cmp(mooncake m1, mooncake m2) {
//	return m1.per_price > m2.per_price;
//}
//int main() {
//	scanf("%d%d", &N, &D);
//	for (int i = 0;i < N;i++)
//		scanf("%lf", &clist[i].colume);
//	for (int i = 0;i < N;i++) {
//		scanf("%lf", &clist[i].price);
//		clist[i].per_price = clist[i].price / clist[i].colume;
//	}
//	sort(clist, clist + N, cmp);
//	for (int i = 0;i < N;i++) {
//		if (D >= clist[i].colume) {
//			D -= clist[i].colume;
//			ans += clist[i].price;
//		}
//		else {
//			ans += clist[i].per_price * D;
//			break;
//		}
//	}
//	printf("%.2lf", ans);
//	return 0;
//}