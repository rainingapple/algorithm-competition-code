/*#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>
using namespace std;
int n;
vector<int> G[10005];
static bool vis[10005];
int getheight(int root)
{
	vis[root] = true;
	int height = 1;
	for (int i = 0;i < G[root].size();i++) {
		if (vis[G[root][i]] == false)
		{
			height = max(height, getheight(G[root][i])+1);
		}
	}
	return height;
}
void attack(int root)
{
	for (int i = 0;i < G[root].size();i++)
	{
		if (vis[G[root][i]] == false) {
			vis[G[root][i]] = true;
			attack(G[root][i]);
		}
	}
}
int find_con_com()
{
	fill(vis, vis + n + 1, false);
	int num = 0;
	for (int i = 1;i <= n;i++) {
		if (vis[i] == false) {
			attack(i);
			num++;
		}
	}
	return num;
}
int main()
{
	cin >> n;
	for (int i = 0;i < n - 1;i++)
	{
		int u, v;
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	vector<int> ans;
	int check_point = find_con_com();
	if (check_point > 1) {
		printf("Error: %d components", check_point);
		return 0;
	}
	int height = 1;
	for (int i = 1;i <= n;i++) {
		fill(vis, vis + n + 1, false);
		int temp = getheight(i);
		if (temp > height) {
			ans.clear();
			ans.push_back(i);
			height = temp;
		}
		else if (temp == height) {
			ans.push_back(i);
		}
	}
	for (int i = 0;i < ans.size();i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}*/