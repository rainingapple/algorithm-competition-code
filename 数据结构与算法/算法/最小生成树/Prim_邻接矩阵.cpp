//²âÊÔÑùÀý£¬´ð°¸ÊÇ15
/*6 10
0 1 4
0 4 1
0 5 2
1 2 6
1 5 3
2 3 6
2 5 5
3 4 4
3 5 5
4 5 3*/


/*#include<iostream>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
int G[MaxV][MaxV];
int d[MaxV];
bool visited[MaxV] = { false };
int n, m;
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
		for (int v = 0;v < n;v++)
		{
			if (visited[v] == false && G[u][v] != INF && G[u][v] < d[v])
			{
				d[v] = G[u][v];
			}
		}
	}
	return ans;
}
int main()
{
	fill(G[0], G[0] + MaxV * MaxV, INF);
	cin >> n >> m;
	for (int i = 0;i < m;i++)
	{
		int u, v, d;
		cin >> u >> v >> d;
		G[u][v] = d;
		G[v][u] = d;
	}
	int ans = prim();
	cout << ans;
	return 0;
}*/