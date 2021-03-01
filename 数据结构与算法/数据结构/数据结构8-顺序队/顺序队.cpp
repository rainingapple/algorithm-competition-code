#include<iostream>
#include<stdio.h>
using namespace std;
#define ElemType int
#define MaxSize 5
typedef struct
{
	ElemType data[MaxSize];
	ElemType front,rear;
}SqQueue;//非循环顺序队
typedef struct
{
	ElemType data[MaxSize];
	int front;
	int count;
}QuType;//循环个数表示型顺序队
//以下内容是一型的顺序队
void InitQueue1(SqQueue *&q)
{
	q=(SqQueue*)malloc(sizeof(SqQueue));
	q->front=q->rear=-1;
}
void DestroyQueue1(SqQueue *&q)
{
	free(q);
}
bool QueueEmpty1(SqQueue *q)
{
	return(q->front==q->rear);
}
bool EnQueue1(SqQueue *&q,ElemType e)
{
	if(q->rear==MaxSize-1)
		return false;
	q->rear++;
	q->data[q->rear]=e;
	return true;
}
bool deQueue1(SqQueue *&q,ElemType e)
{
	if(q->front==q->rear)
		return false;
	q->front++;
	e=q->data[q->front];
	return true;
}
//以下内容是二型的顺序队
void InitQueue2(QuType *&qu)
{
	qu=(QuType*)malloc(sizeof(QuType));
	qu->front=-1;
	qu->count=0;
}
bool EnQueue2(QuType *&qu,ElemType &e)
{
	int rear;
	if(qu->count==0)
		return false;
	rear=(qu->front+qu->count)%MaxSize;
	rear=(rear+1)%MaxSize;
	qu->data[rear]=e;
	qu->count++;
	return true;
}
bool DeQueue2(QuType *&qu,ElemType &e)
{
	if(qu->count==0)
		return false;
	qu->front=(qu->front+1)%MaxSize;
	e=qu->data[qu->front];
	qu->count--;
	return true;
}
bool QueueEmpty2(QuType *qu)
{
	return(qu->count==0);
}