//#include<iostream>
//using namespace std;
//int n, m, t, a, b, c;
//const int INF = 100001;
//int G1[505][505];//转化后的总图
//int G2[505][505];//小道图
//int flag[505][505];
//int d[505];
//int dflag[505];
//int vis[505];
//void Floyd() {
//	for (int i = 1;i <= n;i++) {
//		G2[i][i] = 0;
//	}
//	for (int k = 1;k <= n;k++) {
//		for (int i = 1;i <= n;i++) {
//			for (int j = 1;j <= n;j++) {
//				if (G2[i][k] + G2[k][j] < G2[i][j]) {
//					G2[i][j] = G2[i][k] + G2[k][j];
//				}
//			}
//		}
//	}
//	for (int i = 1;i <= n;i++) {
//		for (int j = i + 1;j <= n;j++) {
//			if (G2[i][j] != INF) {
//				int temp = G2[i][j] * G2[i][j];
//				if (temp < G1[i][j]) {
//					G1[i][j] = temp;
//					flag[i][j] = 1;
//					G1[j][i] = temp;
//					flag[j][i] = 1;
//				}
//			}
//		}
//	}
//}
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
//			if (dflag[u] == 0) {
//				if (vis[j] == false && d[u] + G1[u][j] < d[j]) {
//					d[j] = d[u] + G1[u][j];
//					if (flag[u][j] == 1) {
//						dflag[j] = 1;
//					}
//				}
//			}
//			else {
//				if (vis[j] == false && flag[u][j] == 0 && d[u] + G1[u][j] < d[j]) {
//					d[j] = d[u] + G1[u][j];
//					dflag[j] = 0;
//				}
//			}
//		}
//	}
//}
//int main() {
//	fill(G1[0], G1[0] + 505 * 505, INF);
//	fill(G2[0], G2[0] + 505 * 505, INF);
//	fill(d, d + 505, INF);
//	cin >> n >> m;
//	while (m--) {
//		cin >> t >> a >> b >> c;
//		if (t == 0) {
//			G1[a][b] = c;
//			G1[b][a] = c;
//		}
//		else {
//			G2[a][b] = c;
//			G2[b][a] = c;
//		}
//	}
//	for (int i = 1;i <= n;i++) {
//		for (int j = i + 1;j <= n;j++) {
//			cout << i << " " << j << " " << G1[i][j] << endl;
//		}
//	}
//	Floyd();
//	/*for (int i = 1;i <= n;i++) {
//		for (int j = i + 1;j <= n;j++) {
//			if (G2[i][j] != INF) {
//				cout << i << " " << j << " " << G2[i][j] << endl;
//			}
//		}
//	}*/
//	Dijkstra();
//	cout << endl;
//	for (int i = 1;i <= n;i++) {
//		cout << d[i] << " ";
//	}
//	for (int i = 1;i <= n;i++) {
//		for (int j = i + 1;j <= n;j++) {
//			cout << i << " " << j << " " << G1[i][j] << endl;
//		}
//	}
//	cout << d[n];
//	return 0;
//}