/*#include<iostream>
#include<vector>
#include <queue>
using namespace std;
bool a[1005];
int n, m, k;
vector<int> adj[1005];
vector<int> ans;
void DFS(int v, int deleteV) {//深度优先遍历，v表示当前正在访问的结点，deleteV表示删除的结点
	a[v] = true;
	for (int i = 0;i < adj[v].size();++i) {
		int temp = adj[v][i];
		if (!a[temp] && temp != deleteV)
			DFS(temp, deleteV);
	}
}*/
/*
int main()
{
	cin >> n >> m >> k;
	for (int i = 0;i < m;i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 0;i < k;i++) {
		int mark;
		cin >> mark;
		int part_sum = 0;
		fill(a + 1, a + n + 1, false);
		for (int i = 1;i <= n;i++) {
			if (a[i] == 0 && i != mark)
			{
				DFS(i, mark);
				part_sum++;
			}
		}
		cout << part_sum - 1 << endl;
	}
	return 0;
}*/