#include<iostream>
using namespace std;
const int MaxV = 1005;
const int INF = 1000000000;
int n, m;
int G[MaxV][MaxV];
int d[MaxV];
void Floyd()
{
	fill(d, d + MaxV, INF);
	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for (int j = 0;j < n;j++)
			{
				if (G[i][k]!=INF&&G[k][j]!=INF&&G[i][j] > G[i][k] + G[k][j])
					G[i][j] = G[i][k] + G[k][j];
			}
}
int main()
{
	int u, v, w;
	cin >> n >> m;
	fill(G[0], G[0] + MaxV * MaxV, INF);
	for (int i = 0;i < n;i++)
	{
		G[i][i] = 0;
	}
	for (int i = 0;i < m;i++)
	{
		cin >> u >> v >> w;
		G[u][v] = w;
	}
	Floyd();
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << G[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}