#include<vector>
#include<iostream>
#include <queue>
using namespace std;
struct node {
	int data;
	int layer;
	vector<int> child;
};
node node_list[1005];
void layerorder(int root)
{
	queue<int> q;
	node_list[root].layer=1
	q.push(root);
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		cout << node_list[temp].data;
		for (int i = 0;i < node_list[temp].child.size();i++)
		{
			node_list[node_list[temp].child[i]].layer = node_list[temp].layer + 1;
			q.push(node_list[temp].child[i]);
		}
	}
}