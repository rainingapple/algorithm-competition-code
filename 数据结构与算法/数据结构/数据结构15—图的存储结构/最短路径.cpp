#include<iostream>
using namespace std;
#define arcnum 20
#define vexnum 10
#define MaxSize 20
#define max 32767
typedef struct Graph{
	char Vex[10];
	int  Edge[10][10];
}Graph;
//*******************************Dijkstra算法*******************************************
void Dijkstra(Graph G,int v){
	int s[vexnum];
    int dist[vexnum];
    int path[vexnum];
	for(int i=0;i<vexnum;i++)
	{
		s[i]=0;
		dist[i]=G.Edge[v][i];
		if(G.Edge[v][i]<max)
			path[i]=v;
		else             //这里自己写的时候忘加了，他这样更好
			path[i]=-1;
	}
	s[v]=1;
	path[v]=-1;
	for(int i=0;i<vexnum;i++)
	{
		int u;
		int maxdist=max;
		for(int j=0;j<vexnum;j++)
		{
			if(s[j]==0&&dist[j]<maxdist)//这个当初忘记了s[j]==0这个判定是未加入的条件，会导致多余的计算
			{
				maxdist=dist[j];
				u=j;
			}
		}
		s[u]=1;
		for(int j=0;j<vexnum;j++)
		{
			if(s[j]==0&&dist[u]+G.Edge[u][j]<dist[j])
			{
				dist[j]=dist[u]+G.Edge[u][j];//这个ppt上估计是打错了，按我这个算
				path[j]=u;
			}
		}
	}
}
//*****************************************Floyd算法********************************************
void Floyd(Graph G)
{
	int dist[MaxSize][MaxSize];
	for(int i=0;i<vexnum;i++)
		for(int j=0;j<vexnum;j++)
			dist[i][j]=G.Edge[i][j];
	for(int k=0;k<vexnum;k++)
		for(int i=0;i<vexnum;i++)
			for(int j=0;j<vexnum;j++)
			{
				if(dist[i][j]>dist[i][k]+dist[k][j])
					dist[i][j]=dist[i][k]+dist[k][j];
			}
}