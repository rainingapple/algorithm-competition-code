/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
vector<int> adj[MaxV];
bool visited[MaxV] = { false };
int n, m;
void BFS(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int j = 0;j < n;j++)
		{
			int v = adj[u][j];
			if (visited[v] == false)
			{
				q.push(v);
				visited[v] = true;
			}
		}
	}
}
void BFS_tranverse()
{
	for (int i = 0;i < n;i++)
	{
		if (visited[i] == false)
			BFS(i);
	}
}
int main()
{
	return 0;
}*/