#include<iostream>
using namespace std;
struct node {
	int value;
	int lchild;
	int rchild;
};
const int MaxV = 1005;
node node_list[MaxV];
int index = 0;
int newnode(int v)
{
	node_list[index].value = v;
	node_list[index].lchild = -1;
	node_list[index].rchild = -1;
	return index++;
}
void insert(int &root,int value)
{
	if (root == -1)
	{
		root = newnode(value);
		return;
	}
	if (1)
	{
		insert(node_list[root].lchild, value);
	}
	if (2)
	{
		insert(node_list[root].rchild, value);
	}
}

void search(int root, int x, int newdata)
{
	if (root == -1)
		return;
	if (node_list[root].value == x)
		node_list[root].value == newdata;
	search(node_list[root].lchild, x, newdata);
	search(node_list[root].rchild, x, newdata);
}