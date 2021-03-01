/*#include<iostream>
#include<vector>
using namespace std;
const int MaxV=1001;
const int INF=1000000000;
int n, m, c1, c2;
int G[MaxV][MaxV];
int visited[MaxV] = { false };
int weight[MaxV];
int d[MaxV];
vector<int> pre[MaxV];
vector<int> temppath;
vector<int> opt_path;
void Dijkstra(int s)
{
	fill(d, d + MaxV, INF);
	d[s] = 0;
	for (int i = 0;i < n;i++)
	{
		int min = INF, u = -1;
		for (int j = 0;j < n;j++)
		{
			if (visited[j] == false && d[j] < min)
			{
				min = d[j];
				u = j;
			}
		}
			if (u == -1)
				return;
			visited[u] = true;
			for (int v = 0;v < n;v++)
			{
				if (visited[v] == false && G[u][v] != INF)
				{
				//这里微微有一点变化
					if (d[v] > d[u] + G[u][v])
					{
						d[v] = d[u] + G[u][v];
						pre[v].clear();
						pre[v].push_back(u);
					}
					else if (d[v] = d[u] + G[u][v])
					{
						pre[v].push_back(u);
					}
				}
			}
	}
}
void opt_update(int s)
{
	//下面是求解完各个路径之后优化的过程
	//一定要注意这个temopath的push和pop的时机
	int opt_value = INF;
	if (s == c1)
	{
		temppath.push_back(s);
		int value = 0;
		for (int i = 0;i < temppath.size()-1;i++)
		{
			int now, next;
			now = temppath[i];
			next = temppath[i + 1];
			value += G[now][next];
		}
		if (value < opt_value)
		{
			opt_path = temppath;
			opt_value = value;
		}
		temppath.pop_back();//这个很关键
		return;
	}
	temppath.push_back(s);
	for (int i = 0;i < pre[s].size();i++)
	{
		opt_update(pre[s][i]);
	}
	temppath.pop_back();
}
int main()
{
	cin >> n >> m >> c1 >> c2;
	fill(G[0], G[0] + MaxV * MaxV, INF);
	for (int i = 0;i < n;i++)
	{
		cin >> weight[i];
	}
	for (int i = 0;i < m;i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		G[u][v] = w;
		G[v][u] = w;
	}
}*/