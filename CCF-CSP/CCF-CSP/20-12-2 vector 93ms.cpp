//#include<iostream>
//#include<vector>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//struct node {
//	int score;
//	int result;
//	node(int a, int b) :score(a), result(b) {}
//};
//int n, a, b, totol_gua = 0, ans = -1, thd = -1;
//vector<node> v;
//bool cmp(node n1, node n2) {
//	return n1.score < n2.score;
//}
//void solution() {
//	sort(v.begin(), v.end(), cmp);
//	int pre_gua = 0, total = 0;
//	for (int i = 0;i < n;i++) {
//		if (i > 0 && v[i].score == v[i - 1].score) {
//			total++;
//			if (v[i].result == 0) pre_gua++;
//			continue;
//		}
//		int temp = n - total + 2 * pre_gua - totol_gua;
//		if (temp >= thd) {
//			ans = v[i].score;
//			thd = temp;
//		}
//		total++;
//		if (v[i].result == 0) pre_gua++;
//	}
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		scanf("%d%d", &a, &b);
//		if (b == 0) totol_gua++;
//		v.push_back(node(a, b));
//	}
//	solution();
//	printf("%d", ans);
//	return 0;
//}