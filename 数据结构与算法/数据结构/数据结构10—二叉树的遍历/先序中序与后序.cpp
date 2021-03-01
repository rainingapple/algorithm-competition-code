#include <iostream>
using namespace std;
typedef struct BiTNode{
	int data;
	BiTNode *lchild,*rchild;
}BiTree;
 typedef struct
{
	BiTNode *data[10];
	int top;
}SqStack;
void visit(BiTree *T)
{

}
//****************************递归版本*******************************
void PreOrder(BiTree *T)
{
	if(T==NULL)
		return;
	visit(T);
	PreOrder(T->lchild);
	PreOrder(T->rchild);
}
void InOrder(BiTree *T)
{
	if(T==NULL)
		return;
	InOrder(T->lchild);
	visit(T);
	InOrder(T->rchild);
}
void PostOrder(BiTree *T)
{
	if(T==NULL)
		return;
	PostOrder(T->lchild);
	PostOrder(T->rchild);
	visit(T);
}
//*********************************中序遍历非递归版本******************************
bool isEmpty(SqStack *S)
{
	if(S->top==-1)
		return true;
	else
		return false;
}
bool Push(SqStack *&S,BiTNode *T)
{
	if(S->top==9)
		return false;
	else
	{
		S->data[++S->top]=T;
		return true;
	}
}
bool Pop(SqStack *&S,BiTNode *&T)
{
	if(S->top==-1)
		return false;
	else
	{
		T=S->data[S->top];
		S->top++;
	}
}
bool GetTop(SqStack *S,BiTNode *&T)
{
	if(S->top==-1)
		return false;
	else
	{
		T=S->data[S->top];
	}
}
void InOrder2(BiTree *T)
{
	BiTNode *p=T;
	SqStack *S;
	while(p||!isEmpty(S))
	{
		if(p)
		{
			Push(S,p);
			p=p->lchild;
		}
		else
		{
			Pop(S,p);
			visit(p);
			p=p->rchild;
		}
	}
}
//这个是我自己仿的前序
void PreOrder2(BiTree *T)
{
	BiTNode *p=T;
	SqStack *S;
	while(p||!isEmpty(S))
	{
		if(p)
		{
			visit(p);
			Push(S,p);
			p=p->lchild;
		}
		else
		{
			Pop(S,p);
			p=p->rchild;
		}
	}
}
//后续是最麻烦的一个
void PostOrder2(BiTree *T)
{
	BiTNode *p=T,*r;
	SqStack *S;
	while(p||!isEmpty(S))
	{
		if(p)
		{
			Push(S,p);
			p=p->lchild;
		}
		else
		{
			GetTop(S,p);
			if(p->rchild&&p->rchild!=r)
			{
				p=p->rchild;
				Push(S,p);
				p=p->lchild;
			}
			else
			{
				Pop(S,p);
				visit(p);
				r=p;
				p=NULL;
			}
		}
	}
}