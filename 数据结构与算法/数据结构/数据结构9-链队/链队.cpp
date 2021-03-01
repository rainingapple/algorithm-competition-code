#include<iostream>
#include<stdio.h>
#define ElemType int
#define MAX 3
using namespace std;
typedef struct qnode
{
	ElemType data;
	struct qnode *next;
}QNode;
typedef struct 
{
	QNode *front;
	QNode *rear;
}LiQueue;
typedef struct LNode
{
	int data;
	struct LNode *next;
}LinkList;//这个是为最后的那个只有尾结点的循环单链表准备的
void InitQueue1(LiQueue *&q)
{
	q=(LiQueue*)malloc(sizeof(LiQueue));
	q->front=q->rear=NULL;
}
void DestroyQueue1(LiQueue *&q)
{
	QNode *p=q->front,*r;
	while(p!=NULL)
	{
		r=p->next;
		free(p);
		p=r;
		r=r->next;
	}
	free(p);
	free(q);//别忘了还有这个要释放q
}
bool QueueEmpty1(LiQueue *q)
{
	return(q->rear==NULL);
}
void EnQueue1(LiQueue *&q,ElemType e)
{
	QNode *p;
	p=(QNode*)malloc(sizeof(QNode));
	p->data=e;
	p->next=NULL;
	if(q->rear==NULL)
		q->front=q->rear=p;
	else
	{
		q->rear->next=p;
		q->rear=p;
	}
}
bool DeQueue1(LiQueue *&q,ElemType &e)
{
	QNode *p;
	if(q->front==NULL)
		return false;
	p=q->front;
	if(q->front==q->rear)
	{
		q->front=q->rear=NULL;
	}
	else
		q->front=q->front->next;
	e=p->data;
	free(p);
	return true;
}
void InitQueue2(LinkList *&rear)
{
	rear=NULL;
}
bool QueueEmpty2(LinkList *rear)
{
	return(rear==NULL);
}
void EnQueue2(LinkList *&rear,ElemType x)
{
	LinkList *s;
	s=(LinkList*)malloc(sizeof(LinkList));
	s->data=x;
	if(rear==NULL)
	{
		s->next=s;
		rear=s;
	}
	else
	{
		s->next=rear->next;
		rear->next=s;
		rear=s;
	}
}
bool DeQueue2(LinkList *&rear,ElemType &x)
{
	LinkList *s;
	if(rear==NULL)
		return false;
	else if(rear->next==rear)
	{
		x=rear->data;
		free(rear);//这个实际上是释放一个节点。
		rear=NULL;
	}
	else
	{
		x=rear->data;
		s=rear->next;
		rear->next=s->next;
		free(s);
	}
	return true;
}
void DispQueue(LinkList *rear,int k)
{
	LinkList *s,*t;
	s=rear->next;
	for(int i=1;i<=k;i++)
	{
		cout<<s->data;
		s=s->next;
	}
	cout<<endl;
}
void main()
{
	ElemType x;
	LinkList *rear;
	InitQueue2(rear);
	EnQueue2(rear,1);
	DispQueue(rear,1);
	EnQueue2(rear,2);
	EnQueue2(rear,3);	
	DispQueue(rear,3);
	DeQueue2(rear,x);
	DispQueue(rear,2);
}
