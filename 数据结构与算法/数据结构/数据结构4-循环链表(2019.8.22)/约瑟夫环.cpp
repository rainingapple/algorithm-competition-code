#include<iostream>
using namespace std;
//������ѭ���������������
typedef struct LNode
{
	int data;
	LNode *next;
}LinkList;
void CreateListR(LinkList *&L,int n)//β�巨����ѭ��������
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
	//˵������������������֮ǰ��ɣ��ʳ����в��漰�����뷶Χ���
	int m,n;
	cout<<"������m";
	cin>>m;
	cout<<"������n";
	cin>>n;
	yuesefu(m,n);
}