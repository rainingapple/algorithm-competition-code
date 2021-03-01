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
//ѭ�������Ϊѭ����������ѭ��˫����
//��Ӧ��ѭ�����㷨����ֱ�Ӱ���
//�ڽ����λ��Խ����ʱ��һ���ı�����
//�ܹ飬ûʲô�¶���
void CreateListF(LinkList *&L,int a[],int n)//ͷ�巨��ѭ��������
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
			s->next=L;//���е���һ���ó�ȥдҲ��ȫok��Ӧ�û���һ�㡣
	}
}
void CreateListR(LinkList *&L,int a[],int n)//β�巨��ѭ��������
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
	r->next=L;//����ͱ�ͷ�巽��ö�
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
void CreateListR(DLinkList *&L,int a[],int n)//�������أ�β�巨����ѭ��˫����
{
	DLinkList *s,*r;
	int i;
	L=(DLinkList*)malloc(sizeof(DLinkList));
	L->next=L->prior=NULL;//����ν
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
 void Equal(DLinkList *&L)//����ѭ��˫������ж�һ�����Ƿ����ҶԳƵ��㷨
{
	DLinkList *p=L->next,*q=L->prior;
	while(1)
	{
		if(p->data!=q->data)
		{
			cout<<"��˫�������Ҳ��Գ�"<<endl;
			break;
		}
		else if(p==q||p->next==q)
		{
			cout<<"��˫�������ҶԳ�"<<endl;
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
