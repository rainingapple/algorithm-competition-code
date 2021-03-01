//不能用cin
//不能用BFS
/*#include<iostream>
#include<vector>
#include <queue>
#include<cstring>
using namespace std;
bool a[1005];
int n, m, k;
vector<int> adj[1005];
vector<int> ans;
void BFS(int u,int checkpoint)
{
	queue<int> q;
	q.push(u);
	while (!q.empty()) {
		int temp = q.front();
		a[temp] = true;
		q.pop();
		for (int i = 0;i < adj[temp].size();i++) {
			if (adj[temp][i]!=checkpoint&&a[adj[temp][i]] == false)
				q.push(adj[temp][i]);
		}
	}
}
int main()
{
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0;i < m;i++) {
		int u, v;
		scanf("%d%d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 0;i < k;i++) {
		int mark;
		scanf("%d", &mark);
		int part_sum = 0;
		fill(a + 1, a + n + 1, false);
		for (int i = 1;i <= n;i++) {
			if (a[i] == 0 && i != mark)
			{
				BFS(i, mark);
				part_sum++;
			}
		}
		cout << part_sum - 1 << endl;
	}
	return 0;
}*/