#include<iostream>
using namespace std;
typedef struct BiTNode{
	int data;
	BiTNode *lchild,*rchild;
}BiTree;
//******************************************查找****************************************
//递归版本,自己写的，不用太在意
BiTNode *BST_Search_recursion(BiTree *T,int x)
{
	if(T==NULL)
		return NULL;
	if(x==T->data)
		return T;
	else if(x<T->data)
		return BST_Search(T->lchild,x);
	else
		return BST_Search(T->rchild,x);
}
//这个是我自己写的非递归版本，和它给的差不多
BiTNode *BST_Search1(BiTree *T,int x)
{
	BiTNode *p=T;
	while(p->data!=x)
	{
		if(p->data==x)
			return p;
		else if(T->data<x)
			p=p->rchild;
		else
			p=p->lchild;
	}
	return NULL;
}
//ppt上给的查找
BiTNode *BST_Search2(BiTree *T,int x)
{
	BiTNode *p=T;
	while(p!=NULL&&p->data!=x)
	{
        if(T->data<x)
			p=p->rchild;
		else
			p=p->lchild;
	}
	return NULL;
}
//************************************************插入*******************************************************
bool BST_Insert(BiTree *&T,int x)
{
	BiTNode *s=T;
	if(s==NULL)
	{
		BiTNode *p=(BiTNode*)malloc(sizeof(BiTNode));
		p->data=x;
		p->lchild=p->rchild=NULL;
		s=p;
		return true;
	}
	if(s->data==x)
		return false;
	else if(s->data<x)
		return(s->rchild,x);
	else
		return(s->lchild,x);
}
//**************************************************构造二叉排序树********************************************
bool BST_Create(BiTree *T,int a[],int n)
{
	T=NULL;
	int i;
	while(i<n)
	{
		BST_Insert(T,a[i]);
		i++;
	}
}
//****************************************************删除***********************************************************
//自己按算法思想写的，我觉得是对的
bool BST_Delete(BiTree *&T,int x)
{
	BiTree *p=BST_Search1(T,x);
	if(p==NULL)
		return false;
	else if(p->lchild==NULL&&p->rchild==NULL)
		p=NULL;
	else if(p->lchild!=NULL&&p->rchild!=NULL)
	{
		BiTNode *s=p->rchild;
		while(s->lchild!=NULL)
		{
			s=s->lchild;
		}
		p->data=s->data;
		BST_Delete(s,x);
	}
	else
	{
		BiTNode *s;
		if(p->lchild!=NULL)
			s=p->lchild;
		else
			s=p->rchild;
		p=s;
	}
}