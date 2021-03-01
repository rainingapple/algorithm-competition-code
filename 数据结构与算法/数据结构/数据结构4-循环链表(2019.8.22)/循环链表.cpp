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
typedef struct Dnode
{
	int data;
	struct Dnode *prior;
	struct Dnode *next;
}DLinkList;
//循环链表分为循环单链表与循环双链表
//对应分循环的算法都可直接搬运
//在解决首位跨越问题时有一定的便利性
//总归，没什么新东西
void CreateListF(LinkList *&L,int a[],int n)//头插法建循环单链表
{
	LinkList *s;
	int i;
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	for(i=0;i<n;i++)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=a[i];
		s->next=L->next;
		L->next=s;
		if(i==0)
			s->next=L;//所有的这一步拿出去写也完全ok，应该还快一点。
	}
}
void CreateListR(LinkList *&L,int a[],int n)//尾插法建循环单链表
{
	LinkList *s,*r;
	int i;
	L=(LinkList*)malloc(sizeof(LinkList));
	r=L;
	for(i=0;i<n;i++)
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=L;//这个就比头插方便得多
}
void CreateListF(DLinkList *&L,int a[],int n)//函数重载，头插法建立循环双链表
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
		if(i==0)
		{
			p->next=L;
			L->prior=p;
		}
	}
}
void CreateListR(DLinkList *&L,int a[],int n)//函数重载，尾插法建立循环双链表。
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
	r->next=L;
	L->prior=r;
}
 void Equal(DLinkList *&L)//基于循环双链表的判断一组数是否左右对称的算法
{
	DLinkList *p=L->next,*q=L->prior;
	while(1)
	{
		if(p->data!=q->data)
		{
			cout<<"该双链表左右不对称"<<endl;
			break;
		}
		else if(p==q||p->next==q)
		{
			cout<<"该双链表左右对称"<<endl;
			break;
		}
		else
		{
			p=p->next;
			q=q->prior;
		}
	}
}
 void main()
 {
	 int a[10]={0,1,2,3,4,4,3,2,1,0};
	 int n=10;
	 DLinkList *L;
	 CreateListF(L,a,n);
	 Equal(L);
 }
