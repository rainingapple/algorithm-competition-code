//�����Ϊ������dijkstraƽ��ƽ�����㷨
#include<iostream>
#include<vector>
#include<set>
#include<queue>
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
int in_num[MaxV];
bool inq[MaxV] = {false};//�������˼�Ǳ�ʾ�Ƿ��ڶ�����
void SPFA(int s)
{
	fill(d, d + MaxV, INF);
	fill(w, w + MaxV, 0);
	fill(num, num + MaxV, 0);
	d[s] = 0;
	w[s] = weight[s];
	num[s] = 1;
	queue<int> q;
	q.push(s);
	inq[s] = true;
	in_num[s]++;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		inq[u] = false;
		for (int j = 0;j < adj[u].size();j++)
		{
			int v = adj[u][j].v;
			int dis = adj[u][j].weight;
			if (d[v] > d[u] + dis)
			{
				d[v] = d[u] + dis;
				pre[v].clear();
				pre[v].insert(u);
				w[v] = w[u] + weight[v];
				num[v] = num[u];
				if (inq[v] == false)
				{
					q.push(v);
					inq[v] = true;
					in_num[v]++;
					if (in_num[v] == n)return;
				}
			}
			else if (d[v] == d[u] + dis)
			{
				if (w[v] < w[u] + weight[v])
					w[v] = w[u] + weight[v];
				pre[v].insert(u);
				num[v] = 0;
				for (set<int>::iterator i = pre[v].begin();i != pre[v].end();i++)
				{
					num[v] += num[*i];
				}
				if (inq[v] == false)
				{
					q.push(v);
					inq[v] = true;
					in_num[v]++;
					if (in_num[v] == n)return;
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
	SPFA(c1);
	cout << num[c2] << " " << w[c2];
	return 0;
}