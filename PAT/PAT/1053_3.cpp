/*#include<iostream>
#include<vector>
#include <queue>
#include <stack>
#include <set>
#include<algorithm>
using namespace std;
struct node {
	int weight;
	vector<int> child;
};
const int Maxsize = 105;
node node_list[Maxsize];
int path[Maxsize];
int n, m, s;
bool cmp(int a, int b)
{
	return node_list[a].weight > node_list[b].weight;
}
void ans_out(int numtotal)
{
	for (int i = 0;i < numtotal;i++)
	{
		cout << node_list[path[i]].weight;
		if (i != numtotal-1)
			cout << " ";
	}
	cout << endl;
}
void search_path(int p, int numtotal, int sum)
{
	if (sum > s)
		return;
	else if (sum == s)
	{
		if (node_list[p].child.empty())
			ans_out(numtotal);
		else
			return;
	}
	else
	{
		for (int i = 0;i < node_list[p].child.size();i++)
		{
			int temp = node_list[p].child[i];
			path[numtotal] = temp;
			search_path(temp, numtotal + 1, sum + node_list[temp].weight);
		}
	}
}
int main()
{
	cin >> n >> m >> s;
	for (int i = 0;i < n;i++)
	{
		cin >> node_list[i].weight;
		node_list[i].child.clear();
	}
	for (int i = 0;i < m;i++)
	{
		int root;
		cin >> root;
		int total;
		cin >> total;
		for (int j = 0;j < total;j++)
		{
			int temp;
			cin >> temp;
			node_list[root].child.push_back(temp);
		}
	}
	for (int i = 0;i < n;i++)
	{
		sort(node_list[i].child.begin(), node_list[i].child.end(), cmp);
	}
	path[0] = 0;
	search_path(0, 1, node_list[0].weight);
	return 0;
}*/