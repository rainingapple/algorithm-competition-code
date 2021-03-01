#include<iostream>
using namespace std;
typedef struct BiTNode{
	int data;
	BiTNode *lchild,*rchild;
}BiTree;
//******************************************����****************************************
//�ݹ�汾,�Լ�д�ģ�����̫����
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
//��������Լ�д�ķǵݹ�汾���������Ĳ��
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
//ppt�ϸ��Ĳ���
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
//************************************************����*******************************************************
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
//**************************************************�������������********************************************
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
//****************************************************ɾ��***********************************************************
//�Լ����㷨˼��д�ģ��Ҿ����ǶԵ�
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