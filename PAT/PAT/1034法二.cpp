//这个是把加边权放在前面，和是否访问过独立开，单独判断。
/*#include<iostream>
#include<string.h>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
const int MaxV = 2005;
const int INF = 1000000000;
int G[MaxV][MaxV];
int w[MaxV];
map<string, int> gang_list;
map<string, int> sim;
map<int, string> ism;
bool visited[MaxV] = { false };
int n, k;
int total = 0;
int w_sum = 0;
int n_num = 1;
string gang;
int gang_power = 0;
void change(string s, int len)
{
	if (sim.find(s) != sim.end())
	{
		w[sim[s]] += len;
	}
	else
	{
		ism[total] = s;
		sim[s] = total;
		w[total++] = len;
	}
}
void DFS(int u)
{
	visited[u] = true;
	if (w[u] > gang_power)
	{
		gang_power = w[u];
		gang = ism[u];
	}
	for (int v = 0;v < total;v++)
	{
		if (G[u][v] != 0)
		{
			w_sum += G[u][v];
			G[u][v] = 0;
			G[v][u] = 0;
			if (visited[v] == false)
			{
				n_num++;
				DFS(v);
			}
		}
	}
}
void DFS_tranverse()
{
	for (int i = 0;i < total;i++)
	{
		if (visited[i] == false)
		{
			w_sum = 0;
			n_num = 1;
			gang_power = 0;
			DFS(i);
			if (n_num > 2 && w_sum > k)
			{
				gang_list[gang] = n_num;
			}
		}
	}
}
int main()
{
	cin >> n >> k;
	fill(w, w + MaxV, 0);
	fill(G[0], G[0] + MaxV * MaxV, 0);
	for (int i = 0;i < n;i++)
	{
		string u, v;
		int w;
		cin >> u >> v >> w;
		change(u, w);
		change(v, w);
		G[sim[u]][sim[v]] += w;
		G[sim[v]][sim[u]] += w;
	}
	DFS_tranverse();
	cout << gang_list.size();
	for (auto it = gang_list.begin();it != gang_list.end();it++)
	{
		cout << endl << it->first << " " << it->second;
	}
	return 0;
}*/