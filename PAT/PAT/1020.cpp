//20∑÷÷”£¨“ª±È¬˙∑÷
/*#include<iostream>
#include <queue>
using namespace std;
struct node {
	int value;
	node* lchild;
	node* rchild;
};
int postorder[35];
int inorder[35];
int n;
node* create(int postL, int postR, int inL, int inR)
{
	if (postL > postR)
		return NULL;
	node* root = new node;
	root->value = postorder[postR];
	int k;
	for (k = inL; k <= inR;k++)
	{
		if (postorder[postR] == inorder[k])
			break;
	}
	int lenL = k - inL;
	root->lchild = create(postL, postL + lenL - 1, inL, k - 1);
	root->rchild = create(postL + lenL, postR - 1, k + 1, inR);
	return root;
}
void levelorder(node *root)
{
	queue<node*>q;
	q.push(root);
	int num = 0;
	while (!q.empty())
	{
		num++;
		node* temp = q.front();
		q.pop();
		cout << temp->value;
		if (num < n)
			cout << " ";
		if (temp->lchild != NULL)
			q.push(temp->lchild);
		if (temp->rchild != NULL)
			q.push(temp->rchild);
	}
}
int main()
{
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> postorder[i];
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> inorder[i];
	}
	node* now = create(1, n, 1, n);
	levelorder(now);
}*/