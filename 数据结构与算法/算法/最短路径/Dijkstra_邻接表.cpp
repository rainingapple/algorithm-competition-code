/*#include<iostream>
#include<vector>
using namespace std;
struct Node
{
	int v;//��ͷ
	int w;//��Ȩ
	Node(int v1, int w1) { v = v1;w = w1; }
};
const int MaxV = 1005;
const int INF = 1000000000;
int n, m, s;
vector <Node> adj[MaxV];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
int d[MaxV];
bool visited[MaxV] = { false };
void Dijkstra_gai(int s)
{
	fill(d, d + n, INF);
	d[s] = 0;
	for (int i = 0;i < n;i++)
	{
		int u = -1;
		int min = INF;
		for (int j = 0;j < n;j++)
		{
			if (visited[j] == false && d[j] < min)  //�мǲ�Ҫ���˿����������۵�Լ������
			{
				min = d[j];
				u = j;
			}
		}
		if (u == -1)return;
		visited[u] = true;
		for (int j = 0;j < adj[u].size();j++)
		{
			int v = adj[u][j].v;
			int w = adj[u][j].w;
			if (visited[v] == false && d[v] > d[u] + w)//һ���ģ�ע��������һ������Լ��������û��w!=INF�ˣ���Ϊÿһ����ʼ����vector�ı߶���������INF
				d[v] = d[u] + w;
		}
	}
}
int main()
{
	int u, v, w;
	cin >> n >> m >> s;
	//����Ҳ���ý������ڽӾ�������ĳ�ʼ��Ϊȫ��INF�ˣ���Ϊ�Ѿ���֤�ˡ�
	for (int i = 0;i < m;i++)
	{
		cin >> u >> v >> w;
		adj[u].push_back(Node(v,w));
	}
	Dijkstra_gai(s);
	for (int i = 0;i < n;i++)
		cout << d[i] << " ";
	return 0;
}*/