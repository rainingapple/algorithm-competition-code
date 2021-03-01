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
//****************************�ݹ�汾*******************************
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
//*********************************��������ǵݹ�汾******************************
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
//��������Լ��µ�ǰ��
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
//���������鷳��һ��
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