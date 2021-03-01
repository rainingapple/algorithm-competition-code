#include<iostream>
using namespace std;
#define ElemType int 
#define MaxSize 20
#define max 21
#define arcnum 20
#define vexnum 10
typedef struct MGraph{
	char Vex[10];
	int  Edge[10][10];
	int  vexmax,arcmax;
}Graph;
typedef struct{
	int data[10];
	int top;
}SqStack;
void InitStack(SqStack *&S)
{
	S=(SqStack*)malloc(sizeof(SqStack));
	S->top==-1;
}
bool isEmpty(SqStack *S)
{
	if(S->top==-1)
		return true;
	else
		return false;
}
bool Push(SqStack *&S,int e)
{
	if(S->top==9)
		return false;
	S->data[++S->top]=e;
	return true;
}
bool Pop(SqStack *&S,int &e)
{
	if(S->top==-1)
		return false;
	e=S->data[S->top--];
	return true;
}
bool ReadTop(SqStack *S,int &e)
{
	if(S->top==-1)
		return false;
	e=S->data[S->top];
	return true;
}
//*************************************
int Topo[MaxSize];
int Indegree[MaxSize];
//��������Լ�д�ģ�û��ppt
//����������еģ���������������
//��һ�����⣻ȱ���˹���count�ļ����������Ļ��޷��ж�����ǲ��Ǳ������ˣ�
//�ڶ������⣬����������forѭ������ppt�ķ���ֻ����һ������Ȼ���ķ�������
void Topological_Sort(Graph G)
{
	SqStack *S;
	InitStack(S);
	int w;
	for(int i=0;i<MaxSize;i++)
	{
		if(Indegree[i]==0)
		{
			Topo[0]=i;
			Push(S,i);
		}
	}
	while(isEmpty(S))
	{
		Pop(S,w);
		for(int i=0;i<MaxSize;i++)
		{
			if(G.Edge[w][i])
				Indegree[i]--;
		}
		for(int i=0;i<MaxSize;i++)
		{
			if(Indegree[i]==0)
			{
				Topo[0]=i;
				Push(S,i);
			}
		}
	}
}
//����֮��İ汾
//������ڽӾ���
bool Topological_Sort_new(Graph G)
{
	SqStack *S;
	InitStack(S);
	int count=0;
	int w;
	for(int i=0;i<MaxSize;i++)
	{
		if(Indegree[i]==0)
		{
			Push(S,i);
		}
	}
	while(isEmpty(S))
	{
		Pop(S,w);
		Topo[count++]=w;
		for(int i=0;i<MaxSize;i++)
		{
			if(G.Edge[w][i])
				Indegree[i]--;
			if(Indegree[i]==0)
			{
				Push(S,i);
			}

		}
	}
	if(count<G.vexmax)
		return false;
	else
		return true;
}
//������ڽӱ�
typedef struct ArcNode{
	int adjvex;
	ArcNode *next;
}ArcNode;//�߱�ڵ�
typedef struct VNode{
	int data;
	ArcNode *first;
}VNode;//�����
typedef struct ALgraph{
	VNode vetices[20];
	int vextotal,arctotal;
}ALGraph;//�ڽӱ�
bool Topological_Sort_new(ALGraph G)
{
	SqStack *S;
	InitStack(S);
	int count=0;
	int w;
	for(int i=0;i<MaxSize;i++)
	{
		if(Indegree[i]==0)
		{
			Push(S,i);
		}
	}
	while(isEmpty(S))
	{
		Pop(S,w);
		Topo[count++]=w;
		for(ArcNode* i=G.vetices[w].first;i;i=i->next)
		{
			int v=i->adjvex;
			if(--Indegree[v])
				Push(S,v);
		}
	}
	if(count<G.vextotal)
		return false;
	else
		return true;
}