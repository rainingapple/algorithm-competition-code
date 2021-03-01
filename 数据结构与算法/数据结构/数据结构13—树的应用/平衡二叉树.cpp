#include<iostream>
using namespace std;
typedef struct BiTNode{
	int data;
	BiTNode *lchild,*rchild;
}BiTree;
void Judge_AVL(BiTree *T,int &h,int &b)
{
	int b1,b2,h1,h2;
	b1=b2=h1=h2=0;
	if(T==NULL)
	{	
		h=0;
		b=1;
	}
	else if(T->lchild==NULL&&T->rchild==NULL)
	{
		h=1;
		b=1;
	}
	else
	{
		Judge_AVL(T->lchild,h1,b1);
		Judge_AVL(T->rchild,h2,b2);
		if(h1>h2)
			h=h1+1;
		else
			h=h2+1;
		if(b1==1&&b2==1&&abs(h1-h2)<2)
			b=1;
		else
			b=0;
	}
}
//下面这个是那四种旋转调整中的右单旋转调整，别的应该差不多，就不写了。
//并且默认整个树就是最小的非平衡二叉树
//***不保证对****
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
bool AVL_Insert(BiTree *&T,int x)
{
	BST_Insert(T,x);
	BiTNode *p=T;
	BiTNode *s1=T->lchild->rchild;
	BiTNode *s2=T->lchild;
	s2->rchild=T;
	T=s2;
	T->rchild->lchild=s1;
}
