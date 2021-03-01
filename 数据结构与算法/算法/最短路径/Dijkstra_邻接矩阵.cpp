//这个相应的有很多变式
//要求记录path的话，引入path记录是谁把他引入的，再通过递归输出path
//边权的话，衡量c[v]与c[u]+cost[u][v]的关系，初始化大家都是INF，c【s】是0
//点权的话，衡量w[v]与w[u]+weight[u][v]，初始化大家都是0；w[s]=weight[s];
//要求统计最短路径数量的话，只需要引入一个num,初始化num[s]=1，剩下的都是0，d不等时继承，d相等时num合并
/*#include<iostream>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
int n, m, s;
int G[MaxV][MaxV];
int cost[MaxV][MaxV];
int d[MaxV];
int c[MaxV];
bool visited[MaxV] = {false};
void Dijkstra(int s)
{
	fill(d, d+n, INF);
	fill(c, c + MaxV, INF);
	d[s] = 0;
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
					d[v] = d[u] + G[u][v];
					c[v] = c[u] + cost[u][v];
				}
				else if (d[v] == d[u] + G[u][v] && c[v] > c[u] + cost[u][v])
				{
					c[v] > c[u] + cost[u][v];
				}

			}
		}
	}
}
int main()
{
	int u, v, w;
	cin >> n >> m >> s;
	fill(G[0], G[0] + MaxV*MaxV, INF);
	for (int i = 0;i < m;i++)
	{
		cin >> u >> v >> w;
		G[u][v] = w;
	}
	Dijkstra(s);
	for (int i = 0;i < n;i++)
		cout << d[i] << " ";
	return 0;
}*/