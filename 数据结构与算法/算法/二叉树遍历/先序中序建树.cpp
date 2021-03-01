#include<iostream>
using namespace std;
struct node {
	int value;
	node* lchild;
	node* rchild;
};
node* newnode(int v)
{
	node* temp = new node;
	temp->value = v;
	temp->lchild = NULL;
	temp->rchild = NULL;
	return temp;
}
node* pre[1000];
node* in[1000];
node* create(int preL, int preR, int inL, int inR)
{
	if (preL > preR)
		return;
	node* root = newnode(pre[preL]->value);
	int k;
	for (int k = inL;k <= inR;k++)
	{
		if (in[k] == pre[preL])
			break;
	}
	int lenL = k - inL;
	root->lchild = create(preL + 1, preL + lenL, inL, k - 1);
	root->rchild = create(preL + lenL + 1, preR, k + 1, inR);
	return root;
}