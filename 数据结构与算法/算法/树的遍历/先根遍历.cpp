#include<vector>
#include<iostream>
using namespace std;
struct node {
	int data;
	vector<int> child;
};
node node_list[1005];
void preorder(int v)
{
	cout << node_list[v].data;
	for (int i = 0;i < node_list[v].child.size();i++)
	{
		preorder(node_list[v].child[i]);
	}
}