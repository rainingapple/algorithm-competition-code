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
typedef struct Dnode
{
	int data;
	struct Dnode *prior;
	struct Dnode *next;
}DLinkList;
//双链表基本运算，与单链表区别不大，在掌握单链表的基础上很好学习。
//除该文件中所列的算法外，其他的单链表算法经过简单修改也可用于双链表。
void CreateListF(DLinkList *&L,int a[],int n)//头插法建立双链表，一次自行成功。
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
		if(p->next!=NULL)
			L->next->prior=p;
		p->prior=L;
		L->next=p;
	}
}
void CreateListR(DLinkList *&L,int a[],int n)//尾插法建立双链表，一次成功。
{
	DLinkList *s,*r;
	int i;
	L=(DLinkList*)malloc(sizeof(DLinkList));
	L->next=L->prior=NULL;//无所谓
	r=L;
	for(i=0;i<n;i++)
	{
		s=(DLinkList*)malloc(sizeof(DLinkList));
		s->data=a[i];
		r->next=s;
		s->prior=r;
		r=s;
	}
	r->next=NULL;
}
bool ListInsert(DLinkList *&L,int i,int e)//插入算法，一次基本成功，有几个小bug。
{
	DLinkList *p=L,*s;
	int j=0;//注意细节，j要置为0
	while(j<i-1&&p!=NULL)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)//注意细节，p为NULL要另外说明
		return false;
	else
	{
	s=(DLinkList*)malloc(sizeof(DLinkList));
	s->data=e;
	s->next=p->next;
	if(p->next!=NULL)
		p->next->prior=s;
	s->prior=p;
	p->next=s;
	return true;
	}
}
bool DeleteList(DLinkList *&L,int i,int &e)//删除表中一个节点，也是有几个小bug
{
	DLinkList *p=L,*q;
	int j=0;
	while(j<i-1&&p!=NULL)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
		return false;
	else
	{
		q=p->next;
		if(q==NULL)//注意这里也要验证是否为空
			return false;
		e=q->data;
		p->next=q->next;
		if(q->next!=NULL)//注意这里可能要删除的是最后一个节点，所以要先判断
		    q->next->prior=p;
		free(q);
		q->next=q->prior=NULL;
	}
}
void DispList(DLinkList *L)//输出算法，就把LinkList改成DLinkList就行
{
	DLinkList *p=L->next;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}
void Reverse(DLinkList *&L)//倒置算法，一次成功，无bug。
{
	DLinkList *p=L->next,*q;
	L->next=NULL;
	int i;
	while(p!=NULL)
	{
		q=p->next;
		p->next=L->next;
		if(L->next!=NULL)
			L->next->prior=p;
		p->prior=L;
		L->next=p;
		p=q;
	}
}
void main()
{
	int k=5;
	DLinkList *L;
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	CreateListR(L,a,10);
	DispList(L);
	ListInsert(L,5,k);
	DispList(L);
	Reverse(L);
	DispList(L);
}

