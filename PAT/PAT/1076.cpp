////这道题读题写提纲花了20分钟，写代码15分钟，一次结果20分，很快纠正小错误22分
////思考15分钟后发现DFS在解决问题时有缺陷，并且还是验证不出来的缺陷
////最后总共花了55分钟拿到满分
//#include<iostream>
//#include<vector>
//#include<string.h>
//#include<queue>
//using namespace std;
//const int MaxV = 1005;
//const int INF = 1000000000;
//struct node
//{
//	int u;
//	int level;
//	node(int a, int b) :u(a), level(b) {}
//};
//vector<int> adj[MaxV];
//bool visited[MaxV] = { false };
//int n, L, k;
//int forward_total = -1;
//void BFS(int u)
//{
//	queue<node> q;
//	q.push(node(u, 0));
//	while (!q.empty())
//	{
//		node temp = q.front();
//		visited[temp.u] = true;
//		forward_total++;
//		if (temp.level >= L)
//		{
//			q.pop();
//			continue;
//		}
//		for (int j = 0;j < adj[temp.u].size();j++)
//		{
//			int v = adj[temp.u][j];
//			if (visited[v] == false)
//			{
//				visited[v] = true;
//				q.push(node(v, temp.level + 1));
//			}
//		}
//		q.pop();
//	}
//}
//int main()
//{
//	cin >> n >> L;
//	for (int i = 1;i <= n;i++)
//	{
//		int count;
//		cin >> count;
//		for (int j = 0;j < count;j++)
//		{
//			int temp;
//			cin >> temp;
//			adj[temp].push_back(i);
//		}
//	}
//	cin >> k;
//	for (int i = 0;i < k;i++)
//	{
//		int u;
//		cin >> u;
//		fill(visited, visited + MaxV, false);
//		forward_total = -1;
//		BFS(u);
//		cout << forward_total << endl;
//	}
//}