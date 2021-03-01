//这个是一步法那种写法，但是感觉上比较难以维护
/*#include<iostream>
#include<stack>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
int n, m, s,c2;
int G[MaxV][MaxV];
int cost[MaxV][MaxV];
int d[MaxV];
int c[MaxV];
int pre[MaxV];
bool visited[MaxV] = { false };
void Dijkstra(int s)
{
	fill(d, d + n, INF);
	fill(c, c + MaxV, INF);
	d[s] = 0;
	c[s] = 0;
	pre[s] = s;
	for (int i = 0;i < n;i++)
	{
		int u = -1;
		int min = INF;
		for (int j = 0;j < n;j++)
		{
			if (visited[j] == false && d[j] < min)  //切记不要忘了看起来不起眼的约束条件
			{
				min = d[j];
				u = j;
			}
		}
		if (u == -1)return;
		visited[u] = true;
		for (int v = 0;v < n;v++)
		{
			if (visited[v] == false && G[u][v] != INF)//一样的，注意这里有两个先验约束条件
			{
				if (d[v] > d[u] + G[u][v])
				{
					pre[v] = u;
					d[v] = d[u] + G[u][v];
					c[v] = c[u] + cost[u][v];
				}
				else if (d[v] == d[u] + G[u][v] && c[v] > c[u] + cost[u][v])
				{
					pre[v] = u;
					c[v] = c[u] + cost[u][v];
				}

			}
		}
	}
}
int main()
{
	int u, v, dis, cos;
	cin >> n >> m >> s >> c2;
	fill(G[0], G[0] + MaxV * MaxV, INF);
	for (int i = 0;i < m;i++)
	{
		cin >> u >> v >> dis >> cos;
		G[u][v] = dis;
		G[v][u] = dis;
		cost[u][v] = cos;
		cost[v][u] = cos;
	}
	Dijkstra(s);
	int temp = c2;
	stack<int> out_prepare;
	while (temp != s)
	{
		out_prepare.push(temp);
		temp = pre[temp];
	}
	cout << s << " ";
	while (!out_prepare.empty())
	{
		int out = out_prepare.top();
		cout << out << " ";
		out_prepare.pop();
	}
	cout << d[c2] <<" "<< c[c2];
	return 0;
}*/