////��ȫ�����ĵ��㷨��һ������
////�����ų���ͳ�����·������С����������Ϊ���Ȿ����Ҫ����׶��������ص�����·����ͬʱ��֤����ص�
////һ��ʼ�Ҵ�������һ�����·��֮���ٴ�С��������������������ŷ�����ʵDIjkstra�ı����Ѿ�����������˼
////����ֻ��Ҫ��һ�ε������У�����һ����d2������¼���������֮ǰ·�Ļ����ϻ���Ҫ��С��ıߡ�
////�ɴ�������������һ���㷨
//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//struct Node
//{
//	int v;//��ͷ
//	int w;//��Ȩ
//	Node(int v1, int w1) { v = v1;w = w1; }
//};
//const int MaxV = 10005;
//const int INF = 1000000000;
//int n, m, ans = 0;
//vector <Node> adj[MaxV];
//int d[MaxV];
//int d2[MaxV];
//int a[MaxV];
//bool visited[MaxV] = { false };
//void Dijkstra_ori(int s)
//{
//	fill(d, d + n + 1, INF);
//	d[s] = 0;
//	for (int i = 0;i < n;i++)
//	{
//		int u = -1;
//		int min = INF;
//		for (int j = 1;j <= n;j++)
//		{
//			if (visited[j] == false && d[j] < min)  //�мǲ�Ҫ���˿����������۵�Լ������
//			{
//				min = d[j];
//				u = j;
//			}
//		}
//		if (u == -1)return;
//		visited[u] = true;
//		ans += d2[u];
//		for (int j = 0;j < adj[u].size();j++)
//		{
//			int v = adj[u][j].v;
//			int w = adj[u][j].w;
//			if (visited[v] == false && d[v] > d[u]+w)//һ���ģ�ע��������һ������Լ��������û��w!=INF�ˣ���Ϊÿһ����ʼ����vector�ı߶���������INF
//			{
//				d[v] = d[u] + w;
//				d2[v] = w;
//			}
//			else if (visited[v] == false && d[v] == d[u] + w && d2[v] > w) {
//				d2[v] = w;
//			}
//		}
//	}
//}
//int main()
//{
//	int u, v, w;
//	cin >> n >> m;
//	//����Ҳ���ý������ڽӾ�������ĳ�ʼ��Ϊȫ��INF�ˣ���Ϊ�Ѿ���֤�ˡ�
//	for (int i = 0;i < m;i++)
//	{
//		cin >> u >> v >> w;
//		adj[u].push_back(Node(v,w));
//		adj[v].push_back(Node(u, w));
//	}
//	Dijkstra_ori(1);
//	cout << ans;
//	return 0;
//}