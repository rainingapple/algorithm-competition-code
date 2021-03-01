/*#include<iostream>
#include<vector>
using namespace std;
const int MaxV = 505;
const int INF = 1000000000;
int G[MaxV][MaxV];//Õâ¸öÊÇdistance
int d[MaxV];
int visited[MaxV] = { false };
int GC[MaxV][MaxV];
vector<int> temppath;
vector<int> pre[MaxV];
vector<int> opt_path;
int n, m, c1, c2;
int opt_value = INF;
void opt_find(int s)
{
	if (s == c1)
	{
		temppath.push_back(s);
		int value = 0;
		for (int i = 0;i < temppath.size() - 1;i++)
		{
			int now, next;
			now = temppath[i];
			next = temppath[i + 1];
			value += GC[now][next];
		}
		if (value < opt_value)
		{
			opt_path = temppath;
			opt_value = value;
		}
		temppath.pop_back();
	}
	temppath.push_back(s);
	for (int i = 0;i < pre[s].size();i++)
		opt_find(pre[s][i]);
	temppath.pop_back();
}
void Dijkstra(int s)
{
	fill(d, d + MaxV, INF);
	d[s] = 0;
	for (int i = 0;i < n;i++)
	{
		int u = -1;
		int min = INF;
		for (int j = 0;j < n;j++)
		{
			if (visited[j] == false && d[j] < min)
			{
				min = d[j];
				u = j;
			}
		}
		if (u == -1)return;
		visited[u] = true;
		for (int v = 0;v < n;v++)
		{
			if (visited[v] == false && G[u][v] != INF)
			{
				if (d[v] > d[u] + G[u][v])
				{
					d[v] = d[u] + G[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if(d[v] == d[u] + G[u][v])
				{
					pre[v].push_back(u);
				}
			}
		}
	}
	opt_find(c2);
	for (int i = opt_path.size()-1;i > -1;i--)
	{
		cout << opt_path[i] << " ";
	}
	cout << d[c2] << " " << opt_value;
}
int main()
{
	cin >> n >> m >> c1 >> c2;
	fill(G[0], G[0] + MaxV * MaxV, INF);
	for (int i = 0;i < m;i++)
	{
		int u, v, dis, cos;
		cin >> u >> v >> dis >> cos;
		G[u][v] = dis;
		G[v][u] = dis;
		GC[u][v] = cos;
		GC[v][u] = cos;
	}
	Dijkstra(c1);
	return 0;
}*/