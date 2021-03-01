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
	struct LNode *next;
}LinkList;
typedef struct 
{
	int data[12];
	int length;
}SqList;
//这个说白了就是有顺序的线性表，与普通的线性表略有差距。
void ListInsert(LinkList *&L,int e)//插入一个元素
{
	LinkList *pre=L,*p;
	while(pre->next!=NULL&&pre->next->data<e)
		pre=pre->next;
	p=(LinkList*)malloc(sizeof(LinkList));
	p->data=e;
	p->next=pre->next;
	pre->next=p;
}
void UnionList(LinkList *LA,LinkList *LB,LinkList *LC)//将两个有序表整合为一个大的有序表
{
	LinkList *p=LA->next,*q=LB->next,*r,*s;
	LC=(LinkList*)malloc(sizeof(LinkList));
	r=LC;
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q->data)
		{
			s=(LinkList*)malloc(sizeof(LinkList));
			s->data=p->data;
			r->next=s;
			r=s;
			p=p->next;
		}
		else
		{
			s=(LinkList*)malloc(sizeof(LinkList));
			s->data=q->data;
			r->next=s;
			r=s;
			q=q->next;
		}
	}
	while(p!=NULL)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=p->data;
		r->next=s;
		r=s;
		p=p->next;
	}
	while(p!=NULL)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=q->data;
		r->next=s;
		r=s;
		q=q->next;
	}
}
void main()
{
}