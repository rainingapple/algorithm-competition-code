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
typedef struct
{
	ElemType data[MaxSize];
	int front,rear;
}SqQueue;
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
int visit(int i)
{

}
int FirstNode(Graph G,int v)
{

}
int NextNode(Graph G,int ,int w)
{

}
bool visited[20];
//***********************************图的遍历第10题*****************************
int Exist_Path_DFS(Graph G,int i,int j)
{
	if(i==j)
		return 1;
	else
	{
		for(int w=FirstNode(G,i);w>=0;w=NextNode(G,i,w))
		{
			if(!visited[w]&&Exist_Path_DFS(G,w,j))
				return 1;
		}
	}
	return 0;
}
int Exist_Path_BFS(Graph G,int i,int j)
{
	SqQueue *Q;
	InitQueue(Q);
	if(i==j)
		return 1;
	visit(i);
	visited[i]=true;
	EnQueue(Q,i);
	while(!isEmpty(Q))
	{
		DeQueue(Q,i);
		for(int w=FirstNode(G,i);w>=0;w=NextNode(G,i,w))
		{
			if(w==j)
				return 1;
			visit(w);
			visited[w]=true;
			EnQueue(Q,w);
		}
	}
}
//*************************************第11题*****************************************
void DFS_no_recursion(Graph G,int v)
{
	int w;
	SqStack *S;
	for(int i=0;i<vexnum;i++)
		visited[i]=false;
	Push(S,v);
	visited[v]=true;
	while(!isEmpty(S))
	{
		int k=Pop(S,k);
		visit(k);
		for(w=FirstNode(G,v);w>=0;w=NextNode(G,v,w))
		{
			if(!visited[w])
			{
				Push(S,w);
				visited[w]=true;
			}
		}
	}
}
//*****************************第12题*****************************
bool isTree(Graph G,int v)
{
	for(int i=0;i<G.vexmax;i++)
	{
		visited[i]=false;
	}
	int vnum=0,edgenum=0;
	DFS_TreeJudge(G,v,vnum,edgenum);
	if(vnum==G.vexmax&&edgenum==G.arcmax)
		return true;
	else
		return false;
}
bool DFS_TreeJudge(Graph G,int v,int &vnum,int &edgenum)
{
	visited[v]=true;
	SqStack *S;
	Push(S,v);
	vnum++;
	for(int w=FirstNode(G,v);w>=0;w=NextNode(G,v,w))
	{
		edgenum++;
		if(!visited[w])
		{
			DFS_TreeJudge(G,w,vnum,edgenum);
		}
	}
}