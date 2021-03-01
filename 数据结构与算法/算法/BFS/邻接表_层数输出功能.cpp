//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int MaxV = 1005;
//const int INF = 1000000000;
//struct node
//{
//	int layer;
//	int u;
//	node(int a, int b) :layer(a), u(b) {}
//};
//vector<node> adj[MaxV];
//bool visited[MaxV] = { false };
//int n, m;
//void BFS(int u)
//{
//	queue<node> q;
//	q.push(node(0,u));  //注意起始层是0；
//	visited[u] = true;
//	while (!q.empty())
//	{
//		node prior = q.front();
//		int u = prior.u;
//		q.pop();
//		for (int j = 0;j < n;j++)
//		{
//			int v = adj[u][j].u;
//			if (visited[v] == false)
//			{
//				q.push(node(prior.layer+1,v));
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
//int main()
//{
//	return 0;
//}