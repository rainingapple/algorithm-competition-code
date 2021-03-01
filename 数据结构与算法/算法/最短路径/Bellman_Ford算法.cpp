/*#include<iostream>
#include<vector>
#include<set>
using namespace std;
const int MaxV = 510;
const int INF = 1000000000;
struct node
{
	int v;
	int weight;
	node(int v1, int w1) :v(v1), weight(w1) {}
};
int n, m, c1, c2;
vector<node> adj[MaxV];
int d[MaxV];
int weight[MaxV];
int w[MaxV];
set<int> pre[MaxV];
int num[MaxV];
void Bellman_Ford(int s)
{
	fill(d, d + MaxV, INF);
	d[s] = 0;
	fill(w, w + MaxV, 0);
	w[s] = weight[s];
	fill(num, num + MaxV, 0);//注意这个fill不写的话咱们的测试样例是测不出了的.
	num[s] = 1;//别忘了num初始化
	for (int i = 0;i < n - 1;i++)
	{
		for (int u = 0;u < n;u++)
		{
			for (int j = 0;j < adj[u].size();j++)
			{
				int v = adj[u][j].v;
				int dis = adj[u][j].weight;
				if (d[v] > d[u] + dis)
				{
					d[v] = d[u] + dis;
					w[v] = w[u] + weight[v];//这个当时写错了，注意应该是weight[v]+w[u];
					pre[v].clear();
					pre[v].insert(u);
					num[v] = num[u];
				}
				else if (d[v] == d[u] + dis)
				{
					if(w[v] < w[u] + weight[v])//注意分立的判别标准
					    w[v] = w[u] + weight[v];
					pre[v].insert(u);
					set<int>::iterator i;
					num[v] = 0;//这里是很特殊的，因为num为了避免重复计数，必然要重新统计一边
					for (i = pre[v].begin();i != pre[v].end();i++)
					{
						num[v] += num[*i];
					}
				}
			}
		}
	}
}
int main()
{
	cin >> n >> m >> c1 >> c2;
	for (int i = 0;i < n;i++)
	{
		cin >> weight[i];
	}
	for (int i = 0;i < m;i++)
	{
		int u, v, dis;
		cin >> u >> v >> dis;
		adj[u].push_back(node(v, dis));
		adj[v].push_back(node(u, dis));
	}
	Bellman_Ford(c1);
	cout << num[c2] << " " << w[c2];
	return 0;
}*/