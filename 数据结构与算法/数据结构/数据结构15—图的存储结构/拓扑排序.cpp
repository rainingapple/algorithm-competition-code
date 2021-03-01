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
//这个是我自己写的，没看ppt
//大体雏形是有的，但是有两个问题
//第一个问题；缺少了关于count的计数，这样的话无法判定最后是不是遍历完了；
//第二个问题，我用了两个for循环，而ppt的方法只用了一个，显然她的方法更好
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
//更改之后的版本
//这个是邻接矩阵法
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
//这个是邻接表法
typedef struct ArcNode{
	int adjvex;
	ArcNode *next;
}ArcNode;//边表节点
typedef struct VNode{
	int data;
	ArcNode *first;
}VNode;//顶点表
typedef struct ALgraph{
	VNode vetices[20];
	int vextotal,arctotal;
}ALGraph;//邻接表
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