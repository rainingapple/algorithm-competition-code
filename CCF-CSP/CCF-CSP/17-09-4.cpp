////简单的BFS统计个数
//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//vector<int> G[1005];
//bool vis[1005];
//bool access[1005][1005];
//int total[1005];
//int n, m, ans = 0;
//void BFS(int x) {
//	fill(vis, vis + 1005, false);
//	queue<int> q;
//	q.push(x);
//	vis[x] = true;
//	while (!q.empty()) {
//		int top = q.front();
//		q.pop();
//		for (int i = 0;i < G[top].size();i++) {
//			int v = G[top][i];
//			if (vis[v] == false){
//				q.push(v);
//				vis[v] = true;
//				if (access[x][v] == false) {
//					total[x]++;
//					access[x][v] = true;
//				}
//				if (access[v][x] == false) {
//					total[v]++;
//					access[v][x] = true;
//				}
//			}
//		}
//	}
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0;i < m;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u].push_back(v);
//	}
//	for (int i = 1;i <= n;i++) {
//		BFS(i);
//	}
//	for (int i = 1;i <= n;i++) {
//		if (total[i] == n - 1)
//			ans++;
//	}
//	cout << ans;
//	return 0;
//}