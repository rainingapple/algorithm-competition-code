#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
typedef int Status;
typedef struct LNode
{
	int data;
	struct LNode *next;
}LinkList;
//链表基本算法
//对链表要注意，链表地本质是struct，一部分盛数据，一部分是一个指针。虽然说节点整体表达起来像是个指针，但是二者还是有很大的区别
//节点在建立的时候是与建立指针形式一致，此时其与指针完全一致，但是真正输入数据后便不同，其会变为一个储存信息的整体，只是以指针表示，二者不同。
//还要注意不管是二者中的哪一个，其在赋值方面仅仅是地址。p=L->next;p=NULL和L->next=NULL不同，p在以后节点与L->next一致。
//但是在这里改变p只是把它储存的地址变为空，而不是他所指向的（即L->next）变为空，一定注意。
void List_HeadInsert(LinkList *&L,int a[],int n)
{
	LNode *s;
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	for(int i=0;i<n;i++)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=a[i];
		s->next=L->next;
		L->next=s;
	}
}
void List_TailInsert(LinkList *&L,int a[],int n)
{
	LNode *s,*r;
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	r=L;
	for(int i=0;i<n;i++)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}
/*LNode *GetElem1(LinkList *L,int i)//错误版本
{
	LNode *s;
	s=L;
	int j;
	while(s&&j!=i)
	{
		s=s->next;
	}
	return s;
}*/
LNode *GetElem1(LinkList *L,int i)
{
	int j=1;
	LNode *s;
	s=L->next;
	if(i==0)
		return L;
	if(j<1)
		return NULL;
	while(s&&j<i)
	{
		s=s->next;
		j++;
	}
	return s;
}
LNode *LocateElem(LinkList *L,int e)
{
	LNode *s;
	s=L->next;
	while(s!=NULL&&s->data!=e)
		s=s->next;
	return s;
}
bool InsertListF(LinkList *&L,int i,int e)//插入节点，前插版本
{
	LNode *s,*p;
	p=L;
	int j=1;
	while(p!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	if(p=NULL)
		return false;
	s=(LNode*)malloc(sizeof(LNode));//这里发生了错误，忘记给s节点分配空间了
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool InsertListR(LinkList *&L,int i,int e)//插入节点，后插版本，但不已知第i节点位置
{
	LNode *s,*p;
	p=L;
	int j=1;
	while(p!=NULL&&j<=i)
	{
		p=p->next;
		j++;
	}
	if(p=NULL)
		return false;
	s=(LNode*)malloc(sizeof(LNode));//这里发生了错误，忘记给s节点分配空间了
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool InsertListR(LinkList *&L,LNode *p,int e)//插入节点，后插版本，但已知第i节点位置
{
	LNode *s;
	s=(LNode *)malloc(sizeof(LNode));//这里发生了错误，忘记给s节点分配空间了
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool InsertListL(LinkList *&L,LNode *p,int e)//插入节点，前插版本，但已知第i节点位置
{
	LNode *s;
	int t;//因为这里要交换数据，所以引入一个中间变量
	s=(LNode *)malloc(sizeof(LNode));//这里发生了错误，忘记给s节点分配空间了
	s->data=e;
	s->next=p->next;
	p->next=s;
	t=p->data;
	p->data=s->data;
	s->data=t;
	return true;
}
bool ListDelete(LinkList *&L,int i,int &e)//不已知第i个节点的位置
{
	LNode *p,*q;
	int j=1;
	while(p!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	if(p=NULL)
		return false;
	q=(LNode*)malloc(sizeof(LNode));
	q=p->next;
	if(q=NULL)
		return false;
	e=q->data;
	p->next=q->next;
	free(q);
	q=NULL;
	return true;
}
bool ListDelete(LinkList *&L,LNode *p,int &e)//已知第i个节点的位置,把i+1挪到i，再把i+1删掉
{
	LNode *q;
	q=(LNode*)malloc(sizeof(LNode));
	q=p->next;
	if(q=NULL)
		return false;
	e=p->data;
	p->data=p->next->data;
	p->next=q->next;
	free(q);
	q=NULL;
	return true;
}
int ListLength(LinkList *L)
{
	int count=0;
	LNode *p=L;
	while(p->next!=NULL)
	{
		count++;
		p=p->next;
	}
	return count;
}
void max_and_min(LinkList *L,int &max,int &min,int n)//注意头节点是没有数据的
{
	LNode *p;
	p=L->next;
	min=max=L->next->data;
	while(p!=NULL)
	{
		if(p->data>max)
		{
			max=p->data;
			p=p->next;
		}
		if(p->data<min)
		{
			min=p->data;
			p=p->next;
		}
	}
}
void reverse(LinkList *&L,LNode *r,int n)//头指针加尾指针实现转置
	//********重要***********
{
	LNode *temp,*p;
	p=L;
	while(p->next!=r)
	{
    temp=p->next;
	p->next=temp->next;
	temp->next=r->next;
	r->next=temp;
	}
}
void merge(LinkList *L1,LinkList *L2,LinkList *L,LNode *r)
{
	LNode *p,*q;
	p=L1;
	q=L2;
	while(p->next!=NULL&&q->next!=NULL)
	{
		if(p->next->data<=q->next->data)
		{
			r->next=p->next;
			p->next=p->next->next;
			r=r->next;
		}
		if(p->next->data>q->next->data)
		{
			r->next=q->next;
			q->next=q->next->next;
			r=r->next;
		}
	}
	while(p->next!=NULL)
	{
		r->next=p->next;
		p->next=p->next->next;
		r=r->next;
	}
	while(q->next!=NULL)
	{
		r->next=q->next;
		q->next=q->next->next;
		r=r->next;
	}
}





