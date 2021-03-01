#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct{
	int data[100];
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
	return false;
}
bool EnQueue(SqQueue *&Q,int e)
{
	if(Q->rear>100)
		return false;
	Q->data[Q->rear++]=e;
	return true;
}
bool DeQueue(SqQueue *&Q,int &e)
{
	if(Q->front==Q->rear)
		return false;
	e=Q->data[Q->front++];
	return true;
}
bool GetTop(SqQueue *&Q,int &e)
{
	if(Q->front==Q->rear)
		return false;
	e=Q->data[Q->front++];
	Q->front--;
	return true;
}
void yanghui(int n)
{
	SqQueue *Q=(SqQueue *)malloc(sizeof(SqQueue));
	int first,sec,sum;
	InitQueue(Q);
	EnQueue(Q,0);
	EnQueue(Q,1);
	EnQueue(Q,1);
	EnQueue(Q,0);
	for(int i=1;i<=50;i++)
	{
		if(i==4||i==9)
		{
			EnQueue(Q,0);
			continue;
		}
	DeQueue(Q,first);
	GetTop(Q,sec);
	sum=first+sec;
	cout<<sum<<endl;
	EnQueue(Q,sum);
	}
}
void main()
{
	yanghui(10);
}