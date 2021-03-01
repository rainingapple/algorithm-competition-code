#include<iostream>
using namespace std;
#define ElemType int 
#define MaxSize 20
#define max 21
typedef struct MGraph{
	char Vex[10];
	int  Edge[10][10];
	int  vexmax,arcmax;
}Graph;
//������ص����ڹ������������ʵ��
//���Ծ���ͼ�Ĵ洢��ͼ����ز�����ʵ�ֶ����õĿպ���
//************************************************************************************************
typedef struct
{
	ElemType data[MaxSize];
	int front,rear;
}SqQueue;
void visit(int v)
{

}
void InitQueue(SqQueue *&Q)
{

}
bool isEmpty(SqQueue *Q)
{
	return Q->front==Q->rear;
}
bool EnQueue(SqQueue *&q,ElemType e)
{
	if(q->rear==MaxSize-1)
		return false;
	q->rear++;
	q->data[q->rear]=e;
	return true;
}
bool DeQueue(SqQueue *&q,ElemType e)
{
	if(q->front==q->rear)
		return false;
	q->front++;
	e=q->data[q->front];
	return true;
}
int FirstNode(Graph G,int v)
{

}
int NextNode(Graph G,int ,int w)
{

}
//********************************************************************************
//��һ����������������֮�����ĵñȽ�͸��
bool visited[20];
SqQueue *Q;
void BFSTranverse(Graph G)
{
	for(int i=0;i<20;i++)
		visited[i]=false;
	InitQueue(Q);
	for(int i=0;i<20;i++)
	{
		if(!visited[i])
			BFS(G,i);
	}
}
void BFS(Graph G,int v)
{
	visit(v);
	visited[v]=true;
	EnQueue(Q,v);
	while(!isEmpty(Q))
	{
		DeQueue(Q,v);
		for(int w=FirstNode(G,v);w>=0;w=NextNode(G,v,w))
		{
			visit(w);
			visited[w]=true;
			EnQueue(Q,w);
		}
	}
}
//��Ȩͼ��Դ���·������
int d[20];
void BFS_Min_Distance(Graph G,int x,int y)
{
	for(int i=0;i<20;i++)
	{
		d[i]=max;
	}
	visited[x]=true;
	d[x]=0;
	EnQueue(Q,x);
	while(!isEmpty(Q))
	{
		DeQueue(Q,x);
		for(int w=FirstNode(G,x);w>=0;w=NextNode(G,x,w))
			{
				if(!visited[w])
		        {
			       visited[w]=true;
		           d[w]=d[x]+1;
		           EnQueue(Q,w);
		        }
	        }
	}
}