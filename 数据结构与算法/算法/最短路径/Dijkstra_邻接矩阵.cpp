//�����Ӧ���кܶ��ʽ
//Ҫ���¼path�Ļ�������path��¼��˭��������ģ���ͨ���ݹ����path
//��Ȩ�Ļ�������c[v]��c[u]+cost[u][v]�Ĺ�ϵ����ʼ����Ҷ���INF��c��s����0
//��Ȩ�Ļ�������w[v]��w[u]+weight[u][v]����ʼ����Ҷ���0��w[s]=weight[s];
//Ҫ��ͳ�����·�������Ļ���ֻ��Ҫ����һ��num,��ʼ��num[s]=1��ʣ�µĶ���0��d����ʱ�̳У�d���ʱnum�ϲ�
/*#include<iostream>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
int n, m, s;
int G[MaxV][MaxV];
int cost[MaxV][MaxV];
int d[MaxV];
int c[MaxV];
bool visited[MaxV] = {false};
void Dijkstra(int s)
{
	fill(d, d+n, INF);
	fill(c, c + MaxV, INF);
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
		for (int v = 0;v < n;v++)
		{
			if (visited[v] == false && G[u][v] != INF)//һ���ģ�ע����������������Լ������
			{
				if (d[v] > d[u] + G[u][v])
				{
					d[v] = d[u] + G[u][v];
					c[v] = c[u] + cost[u][v];
				}
				else if (d[v] == d[u] + G[u][v] && c[v] > c[u] + cost[u][v])
				{
					c[v] > c[u] + cost[u][v];
				}

			}
		}
	}
}
int main()
{
	int u, v, w;
	cin >> n >> m >> s;
	fill(G[0], G[0] + MaxV*MaxV, INF);
	for (int i = 0;i < m;i++)
	{
		cin >> u >> v >> w;
		G[u][v] = w;
	}
	Dijkstra(s);
	for (int i = 0;i < n;i++)
		cout << d[i] << " ";
	return 0;
}*/