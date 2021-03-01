/*#include<iostream>
#include<string.h>//记得在vs里面不用加这个，但是在g++是要添加这个头文件的
using namespace std;
const int MAXV = 505;
const int INF = 1000000000;
int n, m, c1, c2;
int G[MAXV][MAXV];
int weight[MAXV];
int d[MAXV];
int num[MAXV];
int w[MAXV];
int visited[MAXV] = {false};
void Dijkstra(int s)
{
	fill(d, d + MAXV, INF);
	fill(w, w + MAXV, 0);
	memset(num, 0, sizeof(num));
	num[s] = 1;
	d[s] = 0;
	w[s] = weight[s];
	for (int i = 0;i < n;i++)
	{
		int min = INF;
		int u = -1;
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
					d[v] = d[u] + G[u][v];//不要忽略任何一个小步骤
					num[v] = num[u];
					w[v] = w[u] + weight[v];
				}
				else if (d[v] == d[u] + G[u][v])
				{
					num[v] += num[u];
					if (w[v] < w[u] + weight[v])
						w[v] = w[u] + weight[v];
				}
			}
		}
	}
}
int main()
{
	cin >> n >> m >> c1 >> c2;
	fill(G[0], G[0] + MAXV * MAXV, INF);//要小心忘记初始化
	for (int i = 0;i < n;i++)
	{
		cin >> weight[i];
	}
	for (int i = 0;i < m;i++)
	{
		int u, v, len;
		cin >> u >> v >> len;
		G[u][v] = len;
		G[v][u] = len;
	}
	Dijkstra(c1);
	cout << num[c2] << " " << w[c2];
	return 0;
}*/