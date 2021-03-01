#include<iostream>
using namespace std;
//考虑用循环单链表进行运算
typedef struct LNode
{
	int data;
	LNode *next;
}LinkList;
void CreateListR(LinkList *&L,int n)//尾插法建立循环单链表
{
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	LNode *r,*s;
	r=L;
	for(int i=1;i<n;i++)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=i;
		r->next=s;
		r=s;
	}
	r->next=L;
}
void DeleteNode(LinkList *&L,LinkList *s)
{
	LinkList *q=s->next;
	int temp=q->data;
	s->data=temp;
	s->next=q->next;
	free(q);
}
void yuesefu(int m,int n)
{
	LinkList *L;
	LinkList *s=L->next;
	CreateListR(L,n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<m;j++)
			s=s->next;
		cout<<s->data;
		DeleteNode(L,s);
	}
}
void main()
{
	//说明：输入检错已在输入之前完成，故程序中不涉及类型与范围检错
	int m,n;
	cout<<"请输入m";
	cin>>m;
	cout<<"请输入n";
	cin>>n;
	yuesefu(m,n);
}