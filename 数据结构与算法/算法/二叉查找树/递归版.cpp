//导入头文件和命名空间
#include<iostream>
using namespace std;
//定义二叉树结构体，左孩子右孩子节点，data是节点的值。
struct node {
	int data;
	node* lchild;
	node* rchild;
};
//newnode的意思是创建新的二叉树节点的函数
//完成节点的初始化，给节点赋值
node* newnode(int v)
{
	node* temp = new node;
	temp->data = v;
	temp->lchild = NULL;
	temp->rchild = NULL;
	return temp;
}
//插入节点
void insert_node(node *&root,int v)
{
	//条件判断
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
int main(){
	node *root;
	insert_node(root,2);
	insert_node(root,3);
	insert_node(root,6);
}