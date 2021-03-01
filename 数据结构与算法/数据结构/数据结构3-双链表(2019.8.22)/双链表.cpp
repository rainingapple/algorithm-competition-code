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
//˫����������㣬�뵥�������𲻴������յ�����Ļ����Ϻܺ�ѧϰ��
//�����ļ������е��㷨�⣬�����ĵ������㷨�������޸�Ҳ������˫����
void CreateListF(DLinkList *&L,int a[],int n)//ͷ�巨����˫����һ�����гɹ���
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
void CreateListR(DLinkList *&L,int a[],int n)//β�巨����˫����һ�γɹ���
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
	r->next=NULL;
}
bool ListInsert(DLinkList *&L,int i,int e)//�����㷨��һ�λ����ɹ����м���Сbug��
{
	DLinkList *p=L,*s;
	int j=0;//ע��ϸ�ڣ�jҪ��Ϊ0
	while(j<i-1&&p!=NULL)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)//ע��ϸ�ڣ�pΪNULLҪ����˵��
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
bool DeleteList(DLinkList *&L,int i,int &e)//ɾ������һ���ڵ㣬Ҳ���м���Сbug
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
		if(q==NULL)//ע������ҲҪ��֤�Ƿ�Ϊ��
			return false;
		e=q->data;
		p->next=q->next;
		if(q->next!=NULL)//ע���������Ҫɾ���������һ���ڵ㣬����Ҫ���ж�
		    q->next->prior=p;
		free(q);
		q->next=q->prior=NULL;
	}
}
void DispList(DLinkList *L)//����㷨���Ͱ�LinkList�ĳ�DLinkList����
{
	DLinkList *p=L->next;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}
void Reverse(DLinkList *&L)//�����㷨��һ�γɹ�����bug��
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

