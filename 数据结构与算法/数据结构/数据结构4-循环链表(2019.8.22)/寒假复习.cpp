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
typedef struct LNode
{
	int data;
	LNode *next;
}LinkList;
typedef struct DNode
{
	int data;
	DNode *prior,*next;
}DLinkList;
void CreateListL(LinkList *&L,int a[],int n)//ͷ�巨����ѭ��������
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	LNode *s;
	for(int i=0;i<n;i++)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=a[i];
		s->next=L->next;
		L->next=s;
		if(i==0)
		{
			s->next=L;
		}

	}
}
void CreateListR(LinkList *&L,int a[],int n)//β�巨����ѭ��������
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	LNode *r,*s;
	r=L;
	for(int i=0;i<n;i++)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=L;
}
void CreateListF(DLinkList *&L,int a[],int n)//�������أ�ͷ�巨����ѭ��˫����
{
	DLinkList *p;
	int i;
	L=(DLinkList*)malloc(sizeof(DLinkList));
	L->next=L->prior=NULL;
	for(i=0;i<n;i++)
	{
		p=(DLinkList*)malloc(sizeof(DLinkList));
		p->data=a[i];
		p->next=L->next;
		L->next->prior=p;
		p->prior=L;
		L->next=p;
		if(i==0)
		{
			p->next=L;
			L->prior=p;
		}
	}
}
void CreateListR(DLinkList *&L,int a[],int n)//β�巨����ѭ��˫����
{
	DNode *s,*r;
	L=(DLinkList*)malloc(sizeof(DLinkList));
	L->next=L->prior=NULL;
	r=L;
	for(int i=0;i<n;i++)
	{
		s=(DNode*)malloc(sizeof(DNode));
		s->data=a[i];
		s->next=r->next;
		s->prior=r;
		r=s;
	}
	r->next=L;
	L->prior=r;
}
