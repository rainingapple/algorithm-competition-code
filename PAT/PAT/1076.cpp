////��������д��ٻ���20���ӣ�д����15���ӣ�һ�ν��20�֣��ܿ����С����22��
////˼��15���Ӻ���DFS�ڽ������ʱ��ȱ�ݣ����һ�����֤��������ȱ��
////����ܹ�����55�����õ�����
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