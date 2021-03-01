/*#include<iostream>
#include<vector>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
struct node {
	int v;
	int w;
	node(int v1, int w1) :v(v1), w(w1){}
};
bool visited[MaxV] = { false };
vector<node> adj[MaxV];
int n;
void DFS(int u, int depth)
{
	visited[u] = true;
	for (int j = 0;j < adj[u].size();j++)
	{
		int v = adj[u][j].v;
		if(visited[v]==false)//注意别忘了这个条件
		    DFS(v, depth + 1);
	}
}
void DFS_tranverse()
{
	for (int i = 0;i < n;i++)
	{
		if (visited[i] == false)
			DFS(i, 1);
	}
}*/