/*#include<iostream>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
bool visited[MaxV] = { false };
int G[MaxV][MaxV];
int n;
void DFS(int u, int depth)
{
	visited[u] = true;
	for (int i = 0;i < n;i++)
	{
		if (visited[i] == false && G[u][i] != INF)
		{
			DFS(i, depth+11);
		}
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