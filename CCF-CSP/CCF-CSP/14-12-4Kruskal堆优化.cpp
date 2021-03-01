////堆优化。。。好像反而慢了一点。。。。
//#include<iostream>
//#include <algorithm>
//#include<queue>
//#pragma warning(disable:4996)
//using namespace std;
//const int INF = 1000000000;
//struct edge {
//	int u;
//	int v;
//	int cost;
//	bool operator <(const edge &e1) const{
//		return this->cost > e1.cost;
//	}
//};
//int father[1005];
//priority_queue<edge> q;
//int find_father(int x) {
//	int u = x;
//	while (father[x] != x) {
//		x = father[x];
//	}
//	while (father[u] != u) {
//		int z = u;
//		u = father[u];
//		father[z] = x;
//	}
//	return x;
//}
//int main() {
//	int n, m, ans = 0, count = 0;
//	scanf("%d%d", &n, &m);
//	for (int i = 0;i < m;i++) {
//		edge e;
//		scanf("%d%d%d", &e.u, &e.v, &e.cost);
//		q.push(e);
//	}
//	for (int i = 1;i <= n;i++) {
//		father[i] = i;
//	}
//	for (int i = 0;i < m;i++) {
//		edge temp = q.top();
//		q.pop();
//		int u = temp.u;
//		int v = temp.v;
//		int cost = temp.cost;
//		int f1 = find_father(u);
//		int f2 = find_father(v);
//		if (f1 != f2) {
//			father[f1] = f2;
//			ans += cost;
//			count++;
//			if (count >= n - 1)
//				break;
//		}
//	}
//	cout << ans;
//	return 0;
//}