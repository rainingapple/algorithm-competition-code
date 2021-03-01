//#include<iostream>
//#include<vector>
//#include<stack>
//#include <algorithm>
//using namespace std;
//int n, m, dfsno = 0, sccno = 0, ans = 0;
//vector<int> G[10005];
//stack<int> s;
//int low[10005];
//int index[10005];
//int scc[10005];
//void DFS(int u) {
//	s.push(u);
//	low[u] = index[u] = ++dfsno;
//	for (int i : G[u]) {
//		if (index[i] == 0) {
//			DFS(i);
//			low[u] = min(low[u], low[i]);
//		}
//		else if (scc[i] == 0) {
//			low[u] = min(low[u], index[i]);
//		}
//	}
//	if (low[u] == index[u]) {
//		int top, num = 0;
//		sccno++;
//		do {
//			top = s.top();
//			s.pop();
//			num++;
//			scc[top] = sccno;
//		} while (top != u);
//		ans += num * (num - 1) / 2;
//	}
//}
//int main() {
//	cin >> n >> m;
//	while (m--) {
//		int u, v;
//		cin >> u >> v;
//		G[u].push_back(v);
//	}
//	for (int i = 1;i <= n;i++) {
//		if (index[i] == 0) {
//			DFS(i);
//		}
//	}
//	cout << ans;
//	return 0;
//}