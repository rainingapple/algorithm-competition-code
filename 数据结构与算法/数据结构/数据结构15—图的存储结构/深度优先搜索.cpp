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
int visit(int i)
{

}
int FirstNode(Graph G,int v)
{

}
int NextNode(Graph G,int ,int w)
{

}
//****************************************************************
//以下为深度优先算法
bool visited[20];
void DFS_Tranverse(Graph G)
{
	for(int i=0;i<20;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<20;i++)
	{
		if(!visited[i])
			DFS(G,i);
	}
}
void DFS(Graph G,int i)
{
	visit(i);
	visited[i]=true;
	for(int w=FirstNode(G,i);w>=0;w=NextNode(G,i,w))
	{
		if(!visited[w])
			DFS(G,i);
	}
}