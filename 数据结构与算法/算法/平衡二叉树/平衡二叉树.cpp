#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
struct node {
	int data;
	int height;
	node* lchild;
	node* rchild;
};
int getheight(node* root)
{
	//小心这里不加的话会出问题的
	if (root == NULL)
		return 0;
	return root->height;
}
int getbalancefactor(node* root)
{
	return getheight(root->lchild) - getheight(root->rchild);
}
//试一下这里的root
void updateheight(node* root)
{
	root->height = max(getheight(root->lchild), getheight(root->rchild)) + 1;
}
node* newnode(int v)
{
	node* temp = new node;
	temp->data = v;
	temp->lchild = NULL;
	temp->rchild = NULL;
	temp->height = 1;
	return temp;
}
void L_rotate(node*& root) {
	node* temp = root->rchild;
	root->rchild = temp->lchild;
	temp->lchild = root;
	updateheight(root);
	updateheight(temp);
	root = temp;
}
void R_rotate(node*& root)
{
	node* temp = root->lchild;
	root->lchild = temp->rchild;
	temp->rchild = root;
	updateheight(root);
	updateheight(temp);
	root = temp;
}
int search(node* root, int v)
{
	if (root == NULL)
		return 0;
	if (root->data == v)
	{
		return 1;
	}
	else if (v < root->data)
	{
		return search(root->lchild, v);
	}
	else
	{
		return search(root->rchild, v);
	}
}
void insert(node* &root,int v) {
	if (root == NULL)
	{
		root = newnode(v);
		return;
	}
	if (v < root->data)
	{
		insert(root->lchild, v);
		updateheight(root);
		if (getbalancefactor(root) == 2)
		{
			if (getbalancefactor(root->lchild)==1)
			{
				R_rotate(root);
			}
			else if (getbalancefactor(root->lchild) == -1)
			{
				L_rotate(root->lchild);
				R_rotate(root);
			}
		}
	}
	else if (v > root->data)
	{
		insert(root->rchild, v);
		updateheight(root);
		if (getbalancefactor(root) == -2)
		{
			if (getbalancefactor(root->rchild) == 1)
			{
				R_rotate(root->rchild);
				L_rotate(root);
			}
			else if (getbalancefactor(root->rchild) == -1)
			{
				L_rotate(root);
			}
		}
	}
}
node* create()
{
	node* root = NULL;
	for (int i = 0;i < n;i++)
	{
		int temp;
		cin >> temp;
		insert(root, temp);
	}
	return root;
}
int main()
{
	cin >> n >> m;
	node* root = create();
	for (int i = 0;i < m;i++)
	{
		int temp;
		cin >> temp;
		cout << search(root, temp) << " ";
	}
}