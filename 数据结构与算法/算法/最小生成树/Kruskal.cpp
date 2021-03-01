/*6 10
0 1 4
0 4 1
0 5 2
1 2 1
1 5 3
2 3 6
2 5 5
3 4 5
3 5 4
4 5 3*/

#include<iostream>
#include<algorithm>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
struct edge
{
	int u, v;
	int c;
};
edge e[MaxV];
int father[MaxV];
int n, m;
bool cmp(edge v1, edge v2)
{
	return v1.c < v2.c;
}
int findfather(int x)
{
	int a = x;
	while (x != father[x])
	{
		x = father[x];
	}
	while (a != father[a])
	{
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}
int Kruskal()
{
	int edge_total = 0;
	int cost_total = 0;
	for (int i = 0;i < n;i++)
	{
		father[i] = i;
	}
	sort(e, e + m, cmp);//注意这里只拍前m
	for (int i = 0;i < m;i++)
	{
		int dadA = findfather(e[i].u);
		int dadB = findfather(e[i].v);
		if (dadA != dadB)
		{
			cout << i << " " << cost_total << endl;
			father[dadB] = dadA;
			cost_total += e[i].c;
			edge_total++;
			if (edge_total == n - 1)
				break;
		}
	}
	if (edge_total < n - 1)
		return -1;
	return cost_total;
}
int main()
{
	cin >> n >> m;
	int total = 0;
	for (int i = 0;i < m;i++)
	{
		int a, b, c;
		cin >> e[i].u >> e[i].v >> e[i].c;
	}
	int ans = Kruskal();
	cout << ans;
}