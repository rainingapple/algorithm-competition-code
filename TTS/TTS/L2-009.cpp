//#include<iostream>
//#include<algorithm>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//struct person {
//	int id = 0;
//	int total = 0;
//	int p_total = 0;
//};
//int n, k, a, b;
//bool cmp(person n1, person n2) {
//	if (n1.p_total != n2.p_total)
//		return n1.p_total > n2.p_total;
//	else if (n1.total != n2.total)
//		return n1.total > n2.total;
//	else
//		return n1.id < n2.id;
//}
//int main() {
//	scanf("%d", &n);
//	vector<person> nlist(n + 1);
//	for (int i = 1;i <= n;i++) {
//		scanf("%d", &k);
//		nlist[i].id = i;
//		for (int j = 0;j < k;j++) {
//			scanf("%d%d", &a, &b);
//			nlist[a].total++;
//			nlist[a].p_total += b;
//			nlist[i].p_total -= b;
//		}
//	}
//	sort(nlist.begin() + 1, nlist.begin() + n + 1, cmp);
//	for (int i = 1;i <= n;i++) {
//		printf("%d %.2lf\n", nlist[i].id, nlist[i].p_total * 1.0 / 100);
//	}
//	return 0;
//}