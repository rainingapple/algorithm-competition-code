#include<iostream>
using namespace std;
struct node {
	int data;
	node* lchild;
	node* rchild;
};
node* newnode(int v)
{
	node* temp = new node;
	temp->data = v;
	temp->lchild = NULL;
	temp->rchild = NULL;
	return temp;
}
void insert_node(node*& root, int v)
{
	if (root == NULL)
	{
		root = newnode(v);
	}
	else if (v < root->data)
	{
		insert_node(root->lchild, v);
	}
	else if (v > root->data)
	{
		insert_node(root->rchild, v);
	}
	else
		return;
}
node* find_pre(node* root)
{
	while (root->rchild != NULL)
		root = root->rchild;
	return root;
}
node* find_next(node* root)
{
	while (root->lchild != NULL)
		root = root->lchild;
	return root;
}
void delete_node(node*& root, int v)
{
	if (root == NULL)
		return;
	if (root->data == v)
	{
		if (root->lchild == NULL && root->rchild == NULL)
		{
			root = NULL;
		}
		else if (root->lchild != NULL)
		{
			node* pre = find_pre(root->lchild);
			root->data = pre->data;
			delete_node(root->lchild, pre->data);
		}
		else if (root->rchild != NULL)
		{
			node* next = find_next(root->lchild);
			root->data = next->data;
			delete_node(root->rchild, next->data);
		}
	}
	else if (v < root->data)
	{
		delete_node(root->lchild, v);
	}
	else
	{
		delete_node(root->rchild, v);
	}
}