#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;
typedef struct DNode
{
	DNode *prior,*next;
	int data;
}DLinkList;
void CreateListF(DLinkList *&L,int a[],int n)//别忘了给DNode分配存储空间
{
	DNode *s;
	L=(DLinkList*)malloc(sizeof(DLinkList));
	L->next=NULL;
	L->prior=NULL;
	for(int i=0;i<n;i++)
	{
		s=(DNode*)malloc(sizeof(DNode));
		s->data=a[i];
		s->next=L->next;
		L->next->prior=s;
		s->prior=L;
		L->next=s;
	}
}
void CreateListR(DLinkList *&L,int a[],int n)//别忘了最后一步r->next=NULL
{
	DNode *s,*r;
	L=(DLinkList*)malloc(sizeof(DLinkList));
	L->next=L->prior=NULL;
	r=L;
	for(int i=0;i<n;i++)
	{
		s=(DNode*)malloc(sizeof(DNode));
		s->data=a[i];
		r->next=s;
		s->prior=r;
		r=s;
	}
	r->next=NULL;
}
bool ListInsert(DLinkList *&L,int i,int e)//注意小心后面的p和p->next的检验是否错误
{
	DNode *s,*p;
	s=(DNode*)malloc(sizeof(DNode));
	s->data=e;
	int j=1;
	while(p!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
		return false;
	s->next=p->next;
	if(p->next==NULL)
		return false;
	p->next->prior=s;
	s->prior=p;
	p->next=s;
	return true;
}
bool DeleteList(DLinkList *&L,int i,int &e)//注意e还得把删除的那玩意带回来
{
	DNode *p=L,*q;
	int j=1;
	while(p!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	q=p->next;
	if(p==NULL||q==NULL)
		return false;
	e=q->data;
	p->next=q->next;
	q->next->prior=p;
	free(q);
	q->next=q->prior=NULL;
	return true;
}

