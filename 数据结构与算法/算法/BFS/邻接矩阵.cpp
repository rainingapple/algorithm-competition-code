//#include<iostream>
//#include<queue>
//using namespace std;
//const int MaxV = 1005;
//const int INF = 1000000000;
//int G[MaxV][MaxV];
//bool visited[MaxV] = { false };
//int n, m;
//void BFS(int u)
//{
//	queue<int> q;
//	q.push(u);
//	visited[u] = true;
//	while (!q.empty())
//	{
//		u = q.front();
//		q.pop();
//		for (int v = 0;v < n;v++)
//		{
//			if (visited[v] == false && G[u][v] != INF)
//			{
//				q.push(v);
//				visited[v] = true;
//			}
//		}
//	}
//}
//void BFS_tranverse()
//{
//	for (int i = 0;i < n;i++)
//	{
//		if (visited[i] == false)
//			BFS(i);
//	}
//}