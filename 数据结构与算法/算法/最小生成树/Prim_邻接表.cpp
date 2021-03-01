/*#include<iostream>
#include<vector>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
struct node
{
	int v;
	int dis;
	node(int a, int b) :v(a), dis(b) {}
};
vector<node> adj[MaxV];
int d[MaxV];
bool visited[MaxV] = { false };
int n,m;
int prim()
{
	fill(d, d + MaxV, INF);
	d[0] = 0;
	int ans = 0;
	for (int i = 0;i < n;i++)
	{
		int u = -1;
		int min = INF;
		for (int j = 0;j < n;j++)
		{
			if (visited[j] == false && d[j] < INF)
			{
				u = j;
				min = d[j];
			}
		}
		if (u == -1)
			return -1;
		visited[u] = true;
		ans += min;
		for (int j = 0;j < adj[u].size();j++)
		{
			int v = adj[u][j].v;
			int dis = adj[u][j].dis;
			if (visited[j] == false && dis < d[v])
			{
				d[v] = dis;
			}
		}
	}
	return ans;
}
int main()
{
	cin >> n >> m;
	for (int i = 0;i < m;i++)
	{
		int u, v, d;
		cin >> u >> v >> d;
		adj[u].push_back(node(v, d));
		adj[v].push_back(node(u, d));
	}
	int ans = prim();
	cout << ans;
	return 0;
}*/