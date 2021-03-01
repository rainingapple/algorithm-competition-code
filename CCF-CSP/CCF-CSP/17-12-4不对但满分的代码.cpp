//#include<iostream>
//using namespace std;
//int n, m, t, a, b, c;
//const int INF = 1000000000;
//long long G1[505][505];//转化后的总图
//int flag[505][505];
//int d[505];
//long long dxiao[505];
//int vis[505];
//void Dijkstra() {
//	d[1] = 0;
//	for (int i = 0;i < n;i++) {
//		int min = INF, u = -1;
//		for (int j = 1;j <= n;j++) {
//			if (vis[j] == false && d[j] < min) {
//				min = d[j];
//				u = j;
//			}
//		}
//		if (u == -1)return;
//		vis[u] = true;
//		for (int j = 1;j <= n;j++) {
//			if (flag[u][j] == 0) {
//				if (vis[j] == false && d[u] + G1[u][j] < d[j]) {
//					d[j] = d[u] + G1[u][j];
//					dxiao[j] = 0;
//				}
//			}
//			else {
//				if (dxiao[u] == 0) {
//					long long temp = G1[u][j] * G1[u][j];
//					if (vis[j] == false && d[u] + temp < d[j]) {
//						d[j] = d[u] + temp;
//						dxiao[j] = G1[u][j];
//					}
//				}
//				else {
//					long long temp = (dxiao[u] + G1[u][j]) * (dxiao[u] + G1[u][j]) - dxiao[u] * dxiao[u];
//					if (vis[j] == false && d[u] + temp < d[j]) {
//						d[j] = d[u] + temp;
//						dxiao[j] = dxiao[u] + G1[u][j];
//					}
//				}
//			}
//		}
//	}
//}
//int main() {
//	fill(G1[0], G1[0] + 505 * 505, INF);
//	fill(d, d + 505, INF);
//	cin >> n >> m;
//	while (m--) {
//		cin >> t >> a >> b >> c;
//		if (c < G1[a][b]) {
//			G1[a][b] = c;
//			G1[b][a] = c;
//			if (t != 0) {
//				flag[a][b] = 1;
//				flag[b][a] = 1;
//			}
//		}
//	}
//	Dijkstra();
//	cout << d[n];
//	return 0;
//}