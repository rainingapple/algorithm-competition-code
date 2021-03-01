//基础的当时都写了无数遍了，这里就不再重复写了
//和当时比较大的一个区别是，我那个的左右指针是个真正的node，而这个是node的指针，这里为了方便修改采取这种写法。
#include<iostream>
#include <queue>
using namespace std;
struct node {
	int layer;
	node* lchild;
	node* rchild;
	int value;
};
void LayerOrder(node* rootnode)
{
	if (rootnode == NULL)
		return;
	queue<node*> q;
	rootnode->layer = 1;
	q.push(rootnode);
	while (!q.empty())
	{
		node* temp = q.front();
		q.pop();
		cout << temp->value;
		if (temp->lchild != NULL)
		{
			temp->lchild->layer = temp->layer + 1;
			q.push(temp->lchild);
		}
		if (temp->rchild != NULL)
		{
			temp->rchild->layer = temp->layer + 1;
			q.push(temp->rchild);
		}
	}
}
int main()
{
	return 0;
}