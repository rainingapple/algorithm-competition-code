////完全自主改的算法，一遍满分
////首先排除传统的最短路径和最小生成树，因为题意本质需要求从首都到各个地点的最短路径，同时保证最大重叠
////一开始我打算先求一边最短路径之后再从小到大遍历，但是做着做着发现其实DIjkstra的本质已经完成了这个意思
////所以只需要在一次迭代当中，插入一个量d2用来记录在最大利用之前路的基础上还需要最小搭的边。
////由此我自主创造了一个算法
//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//struct Node
//{
//	int v;//弧头
//	int w;//边权
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
//			if (visited[j] == false && d[j] < min)  //切记不要忘了看起来不起眼的约束条件
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
//			if (visited[v] == false && d[v] > d[u]+w)//一样的，注意这里有一个先验约束条件，没有w!=INF了，因为每一个初始化进vector的边都不可能是INF
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
//	//这里也不用进行像邻接矩阵里面的初始化为全是INF了，因为已经保证了。
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