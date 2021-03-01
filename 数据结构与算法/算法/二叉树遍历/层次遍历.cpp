//�����ĵ�ʱ��д���������ˣ�����Ͳ����ظ�д��
//�͵�ʱ�Ƚϴ��һ�������ǣ����Ǹ�������ָ���Ǹ�������node���������node��ָ�룬����Ϊ�˷����޸Ĳ�ȡ����д����
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