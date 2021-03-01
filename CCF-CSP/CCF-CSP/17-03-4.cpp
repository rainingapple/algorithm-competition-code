//#include<iostream>
//#include<vector>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//const int INF = 10000000;
//struct edge {
//	int u;
//	int v;
//	int cost;
//};
//int n, m, maxvalue = 0;
//edge E[200005];
//int father[100005];
//bool cmp(edge e1, edge e2) {
//	return e1.cost < e2.cost;
//}
//int find_father(int x) {
//	int u = x;
//	while (father[x] != x) {
//		x = father[x];
//	}
//	while (father[u] != u) {
//		int temp = u;
//		u = father[u];
//		father[temp] = x;
//	}
//	return x;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1;i <= n;i++) {
//		father[i] = i;
//	}
//	for (int i = 0;i < m;i++) {
//		scanf("%d%d%d", &E[i].u, &E[i].v, &E[i].cost);
//	}
//	sort(E, E + m, cmp);
//	for (int i = 0;i < m;i++) {
//		int f1 = find_father(E[i].u);
//		int f2 = find_father(E[i].v);
//		if (f1 != f2) {
//			father[f1] = f2;
//			if (E[i].cost > maxvalue) {
//				maxvalue = E[i].cost;
//			}
//		}
//		if (find_father(1) == find_father(n)) {
//			break;
//		}
//	}
//	cout << maxvalue;
//	return 0;
//}