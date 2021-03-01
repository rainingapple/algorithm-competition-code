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
//��������㷨
//������Ҫע�⣬����ر�����struct��һ����ʢ���ݣ�һ������һ��ָ�롣��Ȼ˵�ڵ��������������Ǹ�ָ�룬���Ƕ��߻����кܴ������
//�ڵ��ڽ�����ʱ�����뽨��ָ����ʽһ�£���ʱ����ָ����ȫһ�£����������������ݺ�㲻ͬ������Ϊһ��������Ϣ�����壬ֻ����ָ���ʾ�����߲�ͬ��
//��Ҫע�ⲻ���Ƕ����е���һ�������ڸ�ֵ��������ǵ�ַ��p=L->next;p=NULL��L->next=NULL��ͬ��p���Ժ�ڵ���L->nextһ�¡�
//����������ı�pֻ�ǰ�������ĵ�ַ��Ϊ�գ�����������ָ��ģ���L->next����Ϊ�գ�һ��ע�⡣
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
/*LNode *GetElem1(LinkList *L,int i)//����汾
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
bool InsertListF(LinkList *&L,int i,int e)//����ڵ㣬ǰ��汾
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
	s=(LNode*)malloc(sizeof(LNode));//���﷢���˴������Ǹ�s�ڵ����ռ���
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool InsertListR(LinkList *&L,int i,int e)//����ڵ㣬���汾��������֪��i�ڵ�λ��
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
	s=(LNode*)malloc(sizeof(LNode));//���﷢���˴������Ǹ�s�ڵ����ռ���
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool InsertListR(LinkList *&L,LNode *p,int e)//����ڵ㣬���汾������֪��i�ڵ�λ��
{
	LNode *s;
	s=(LNode *)malloc(sizeof(LNode));//���﷢���˴������Ǹ�s�ڵ����ռ���
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
bool InsertListL(LinkList *&L,LNode *p,int e)//����ڵ㣬ǰ��汾������֪��i�ڵ�λ��
{
	LNode *s;
	int t;//��Ϊ����Ҫ�������ݣ���������һ���м����
	s=(LNode *)malloc(sizeof(LNode));//���﷢���˴������Ǹ�s�ڵ����ռ���
	s->data=e;
	s->next=p->next;
	p->next=s;
	t=p->data;
	p->data=s->data;
	s->data=t;
	return true;
}
bool ListDelete(LinkList *&L,int i,int &e)//����֪��i���ڵ��λ��
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
bool ListDelete(LinkList *&L,LNode *p,int &e)//��֪��i���ڵ��λ��,��i+1Ų��i���ٰ�i+1ɾ��
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
void max_and_min(LinkList *L,int &max,int &min,int n)//ע��ͷ�ڵ���û�����ݵ�
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
void reverse(LinkList *&L,LNode *r,int n)//ͷָ���βָ��ʵ��ת��
	//********��Ҫ***********
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





