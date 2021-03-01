#include<iostream>
#include<set>
using namespace std;
const int MaxV = 1005;
int father[MaxV];
bool isroot[MaxV] = { false };
int n, m;
void init()
{
	for (int i = 1;i <= n;i++)
	{
		father[i] = i;
	}
}
int findfather(int x)
{
	int a = x;
	while (x != father[x])
		x = father[x];
	while (a != father[a])
	{
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}
void Union(int x, int y)
{
	int dadA = findfather(x);
	int dadB = findfather(y);
	if (dadA != dadB)
		father[dadA] = dadB;
}
int main()
{
	cin >> n >> m;
	init();
	for (int i = 0;i < m;i++)
	{
		int u, v;
		cin >> u >> v;
		Union(u, v);
	}
	/*for (int i = 1;i <= n;i++)
	{
		isroot[findfather(i)] = true;
	}
	int ans = 0;
	for (int i = 0;i <= n;i++)
	{
		ans += isroot[i];
	}
	cout << ans;*/
	int ans = 0;
	for (int i = 1;i <= n;i++)
	{
		if (father[i] == i)
			ans++;
	}
	cout << ans;
	return 0;
}