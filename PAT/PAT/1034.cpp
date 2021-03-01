//这个是我自己写的，最后是28分，没有考虑到1000条电话记录是可能有2000个人。
//这个在处理环的时候采取的是，用set首先将需要可能更新的边权存起来，后面再更新
/*#include<iostream>
#include<string.h>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
int G[MaxV][MaxV];
int w[MaxV];
map<string,int> gang_list;
set<int> update;
map<string, int> sim;
map<int, string> ism;
bool visited[MaxV] = { false };
int n, k;
int total = 0;
int w_sum = 0;
string gang;
int gang_power = 0;
void change(string s,int len)
{
	if (sim.find(s) != sim.end())
	{
		w[sim[s]]+=len;
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
	if(update.find(u)==update.end())
		update.insert(u);
	if (w[u] > gang_power)
	{
		gang_power = w[u];
		gang = ism[u];
	}
	for (int v = 0;v < total;v++)
	{
		if (visited[v] == false && G[u][v] != 0)
		{
			w_sum += G[u][v];
			G[u][v] = 0;
			G[v][u] = 0;
			DFS(v);
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
			gang_power = 0;
			DFS(i);
			for (auto it = update.begin();it != update.end();it++)
				visited[*it] = true;
			if (update.size()>2&&w_sum>k)
			{
				gang_list[gang]= update.size();
			}
			update.clear();
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
		change(u,w);
		change(v,w);
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