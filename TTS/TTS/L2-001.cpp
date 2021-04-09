//#include<iostream>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//const int INF = 1000000000;
//int N, M, S, D, a, b, c, maxnum = -1, min_count = 0;
//int dis[505][505], d[505], w[505];
//bool vis[505];
//vector<int> pre[505], temp_path, path;
//void Dijkstra(int s) {
//	fill(d, d + 505, INF);
//	d[s] = 0;
//	for (int i = 0;i < N;i++) {
//		int u = -1, MIN = INF;
//		for (int j = 0;j < N;j++) {
//			if (vis[j] == false && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1)return;
//		vis[u] = true;
//		for (int v = 0;v < N;v++) {
//			if (vis[v] == false && dis[u][v] != INF) {
//				if (d[u] + dis[u][v] < d[v]) {
//					d[v] = d[u] + dis[u][v];
//					pre[v].clear();
//					pre[v].push_back(u);
//				}
//				else if (d[u] + dis[u][v] == d[v])
//					pre[v].push_back(u);
//			}
//		}
//	}
//}
//void opt_solve(int x) {
//	if (x == S) {
//		min_count++;
//		temp_path.push_back(x);
//		int tv = 0;
//		for (int i = 0;i < temp_path.size();i++)
//			tv += w[temp_path[i]];
//		if (tv > maxnum) {
//			maxnum = tv;
//			path = temp_path;
//		}
//		temp_path.pop_back();
//		return;
//	}
//	temp_path.push_back(x);
//	for (int i = 0;i < pre[x].size();i++)
//		opt_solve(pre[x][i]);
//	temp_path.pop_back();
//}
//int main() {
//	fill(dis[0], dis[0] + 505 * 505, INF);
//	scanf("%d%d%d%d", &N, &M, &S, &D);
//	for (int i = 0;i < N;i++)
//		scanf("%d", &w[i]);
//	while (M--) {
//		scanf("%d%d%d", &a, &b, &c);
//		dis[a][b] = c;
//		dis[b][a] = c;
//	}
//	Dijkstra(S);
//	////检验pre是否正确
//	//for (int i = 0;i < N;i++) {
//	//	cout << i << "----";
//	//	for (int j = 0;j < pre[i].size();j++) {
//	//		cout << pre[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	opt_solve(D);
//	printf("%d %d\n", min_count, maxnum);
//	for (int i = path.size() - 1;i >= 0;i--)
//		i != 0 ? printf("%d ", path[i]) : printf("%d", path[i]);
//	return 0;
//}