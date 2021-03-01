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
//��������㷨
//������Ҫע�⣬����ر�����struct��һ����ʢ���ݣ�һ������һ��ָ�롣��Ȼ˵�ڵ��������������Ǹ�ָ�룬���Ƕ��߻����кܴ������
//�ڵ��ڽ�����ʱ�����뽨��ָ����ʽһ�£���ʱ����ָ����ȫһ�£����������������ݺ�㲻ͬ������Ϊһ��������Ϣ�����壬ֻ����ָ���ʾ�����߲�ͬ��
//��Ҫע�ⲻ���Ƕ����е���һ�������ڸ�ֵ��������ǵ�ַ��p=L->next;p=NULL��L->next=NULL��ͬ��p���Ժ�ڵ���L->nextһ�¡�
//����������ı�pֻ�ǰ�������ĵ�ַ��Ϊ�գ�����������ָ��ģ���L->next����Ϊ�գ�һ��ע�⡣
void CreateListF(LinkList *&L,int a[],int n)//ͷ�巨����,��ʵ�����飬�������ա�
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
	}
}
void CreateListR(LinkList *&L,int a[],int n)//β�巨����
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
	r->next=NULL;
}
void InitList(LinkList *&L)
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
}
void DestroyList(LinkList *&L)
{
	LinkList *pre=L,*p=L->next;
	while(p!=NULL)
	{
		free(pre);
		pre=p;
		p=pre->next;
	}
	free(pre);
}
bool ListEmpty(LinkList *L)
{
	return(L->next==NULL);
}
int ListLength(LinkList *L)
{
	int n=0;
	LinkList *p=L;
	while(p->next!=NULL)
	{
		n++;
		p=p->next;
	}
	return n;
}
void DispList(LinkList *L)
{
	LinkList *p=L->next;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}
bool GetElem(LinkList *L,int i,int &e)
{
	int j=0;
	LinkList *p=L;
	while(j<i&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else
	{
		e=p->data;
		return true;
	}
}
int LocateElem(LinkList *L,int e)
{
	int i=1;
	LinkList *p=L->next;
	while(p!=NULL&&p->data!=e)
	{
		i++;
		p=p->next;
	}
	if(p==NULL)
		return 0;
	else
		return i;
}
bool InsertList(LinkList *&L,int i,int e)
{
	int j=0;
	LinkList *p=L,*s;
	while(j<i-1&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else
	{
		s=(LinkList*)malloc(sizeof(LinkList));
		s->data=e;
		s->next=p->next;
		p->next=s;
		return true;
	}
}
bool ListDelete(LinkList *&L,int i,int &e)//PPT�Ͻ��ģ����⽨��һ���м�LinkList�ķ�����
{
	int j=0;
	LinkList *p=L,*q;
	while(j<i-1&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	q=(LinkList*)malloc(sizeof(LinkList));
	q=p->next;
	if(q==NULL)
		return false;
	e=q->data;
	p->next=q->next;
	free(q);
	q=NULL;
	return true;
}
void delmaxnode(LinkList *&L)//�ҵ�����������Ԫ�أ��ٽ���ɾ����
{
	LinkList *p=L->next,*pre=L,*maxp=p,*maxpre=pre;
	while(p!=NULL)
	{
		if(maxp->data<p->data)
		{
			maxp=p;
			maxpre=pre;
		}
		p=p->next;
		pre=pre->next;
	}
	maxpre->next=maxp->next;
	free(maxp);
	maxpre=NULL;
}
void sort(LinkList *&L)//������㷨������3Сʱ��⣬�����Ҿ����Ǻ��ʵģ����������������ȷ�������ͷע�͡�
	//����㷨������ɶ�������������Ƚ�����L��p�����������֣��ٽ�p������һ��һ���ز��뵽L�����Ĳ��֡�
	//һ��Ҫ��������һ������ָ�뻹��һ������������������ġ�ָ�롱
{
	LinkList *p,*pre,*q;
	p=L->next->next;//ʹһ���½���ָ��pָ��ԭ����ĵڶ���Ԫ�ء�
	L->next->next=NULL;//ʹ�ڶ���Ԫ�ز�ָ���κ����
	while(p!=NULL)
	{
		q=p->next;//��q��ǰ����p�ĺ��Ԫ�صĵ�ַ
		pre=L;//��preָ��head�ڵ㣬�����ͷ��βɨ��L����İ�����
		while(pre->next!=NULL&&pre->next->data<p->data)
			pre=pre->next;//��ͷ��βɨ��L����Ĳ��֣�����ʱ��pָ��Ԫ�ز��뵽���ʵ�����λ�á�
		p->next=pre->next;
		pre->next=p;//��������������Ч��������pre->p->(pre->next)
		p=q;//��p����һλ
	}
}
void Reverse(LinkList *&L)
{
	LinkList *p=L->next,*q;//*p=L->next����������Ϊ��p��ΪL->next
	L->next=NULL;
	while(p!=NULL)
	{
		q=p->next;
		p->next=L->next;//ע���������˼����p�����nextָ��L->next,����L->next->next=L->next
		L->next=p;//ʵ���Ͼ��������ͷ�巨
		p=q;
	}
}
void split(LinkList *&L,LinkList *&L1,LinkList *&L2)
{
	LinkList *p=L->next,*q,*r1;
	L1=L;
	r1=L1;
	L2=(LinkList *)malloc(sizeof(LinkList));
	L2->next=NULL;
	while(p!=NULL)
	{
		r1->next=p;
		r1=p;
		p=p->next;
		q=p->next;
		p->next=L2->next;
		L2->next=p;
		p=q;
	}
	r1->next=NULL;
}
void flag(LinkList *&L)//һ��ֻ��012��������
{
	LinkList *p,*L1,*L2,*r,*r1,*r2;
	L1=NULL;
	L2=NULL;
	p=L->next;
	r=L;
	while(p!=NULL)
	{
		if(p->data==0)
		{
			r->next=p;
			r=p;
		}
		if(p->data==1)
		{
			if(L1==NULL)
			{
				L1=r1=p;
			}
			else
			{
				r1->next=p;
				r1=p;
			}
		}
		if(p->data==2)
		{
			if(L2==NULL)
			{
				L2=r2=p;
			}
			else
			{
				r2->next=p;
				r2=p;
			}
		}
		p=p->next;
	}
	r->next=r1->next=r2->next=NULL;
	r->next=L1;
	r1->next=L2;
}
void main()
{
	LinkList *S,*q;
	int a[10]={1,2,1,0,2,0,1,0,2,1};
	CreateListR(S,a,10);
	DispList(S);
	Reverse(S);
	DispList(S);
	flag(S);
	DispList(S);
}