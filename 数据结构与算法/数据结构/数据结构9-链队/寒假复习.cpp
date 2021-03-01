#include<iostream>
using namespace std;
typedef struct LinkNode{
	int data;
	struct LinkNode *next;
}LinkNode;
typedef struct{
	LinkNode *front,*rear;
}LinkQueue;
//这里有个说明，这个front实际上是个虚指针。front->next才是真正的队头.但是rear确实指向最后一个元素。
void InitQueue(LinkQueue *&Q)
{
	Q=(LinkQueue*)malloc(sizeof(LinkQueue));
	Q->front=Q->rear;
	Q->front->next=NULL;
}
bool isEmpty(LinkQueue *Q)
{
	if(Q->front=Q->rear)
		return true;
	else
		return false;
}
void EnQueue(LinkQueue *&Q,int e)
{
	LinkNode *s;
	s=(LinkNode*)malloc(sizeof(LinkNode));
	s->data=e;
	s->next=NULL;
	Q->rear->next=s;
	Q->rear=s;
}
bool DeQueue(LinkQueue *&Q,int &e)//讲道理,他这个不是特别好我觉得
{
	if(Q->front==Q->rear)
		return false;
	LinkNode *p=Q->front->next;
	e=p->data;
	Q->front->next=p->next;
	if(Q->rear=p)//注意这一步只是为了让判空变得方便
		Q->rear=Q->front;
	free(p);
	return true;
}