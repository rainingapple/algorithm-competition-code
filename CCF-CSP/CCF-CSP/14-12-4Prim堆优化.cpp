//#include<iostream>
//#include<queue>
//#pragma warning(disable:4996)
//using namespace std;
//const int INF = 1000000000;
//int n, m, ans = 0;
//int G[1005][1005];
//int vis[1005];
//int d[1005];
//priority_queue<int> q;
//bool Prim() {
//	d[1] = 0;
//	for (int i = 0;i < n;i++) {
//		int min = INF, u = -1;
//		for (int j = 1;j <= n;j++) {
//			if (vis[j] == false && d[j] < min) {
//				min = d[j];
//				u = j;
//			}
//		}
//		if (u == -1) {
//			return false;
//		}
//		ans += min;
//		vis[u] = true;
//		for (int j = 1;j <= n;j++) {
//			if (vis[j] == false && G[u][j] < d[j]) {
//				d[j] = G[u][j];
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	fill(G[0], G[0] + 1005 * 1005, INF);
//	fill(vis, vis + 1005, false);
//	fill(d, d + 1005, INF);
//	for (int i = 0;i < m;i++) {
//		int u, v, c;
//		scanf("%d%d%d", &u, &v, &c);
//		G[u][v] = c;
//		G[v][u] = c;
//	}
//	Prim();
//	cout << ans;
//	return 0;
//}