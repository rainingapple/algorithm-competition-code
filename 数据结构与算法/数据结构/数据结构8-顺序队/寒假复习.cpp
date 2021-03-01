/*#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct{
	int data[10];
	int front,rear;
}SqQueue;
void InitQueue(SqQueue *&Q)
{
	Q->front=Q->rear=0;
}
bool isEmpty(SqQueue *Q)
{
	if(Q->front==Q->rear)
		return true;
	else
		return false;
}
bool EnQueue(SqQueue *&Q,int e)
{
	if((Q->rear+1)%12==Q->front)
		return false;
	Q->data[Q->rear]=e;
	Q->rear=(Q->rear+1)%12;
	return true;
}
bool DeQueue(SqQueue *&Q,int &e)
{
	if(Q->front==Q->rear)
		return false;
	e=Q->data[Q->front];
	Q->front=(Q->front+1)%12;
	return true;
}*/

