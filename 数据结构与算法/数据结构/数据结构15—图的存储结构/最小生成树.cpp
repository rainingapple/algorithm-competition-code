#include<iostream>
using namespace std;
#define arcnum 20
#define vexnum 10
#define MaxSize 20
typedef struct Graph{
	char Vex[10];
	int  Edge[10][10];
}Graph;
//�������㷨�˽�˼��ͺ�
//Prim�㷨
void MST_Prim(Graph G)
{
	int min_weight[arcnum];
	int adjvex[arcnum];
	for(int i=0;i<arcnum;i++)//��ʼ��������������
	{
		min_weight[i]=G.Edge[0][i];
		adjvex[i]=0;
	}
	for(int i=0;i<arcnum-1;i++)
	{
		int min_arc=30000;
		int min_vex;
		for(int j=1;j<arcnum;j++)
		{
			if(min_weight[j]!=0&&min_weight[j]<min_arc)
			{
				min_arc=min_weight[j];
				min_vex=j;
			}
		}
		min_weight[min_vex]=0;
		for(int k=0;k<arcnum;k++)
		{
			if(min_weight[k]!=0&&G.Edge[min_vex][k]<min_weight[k])
			{
				min_weight[k]=G.Edge[min_vex][k];
				adjvex[k]=min_arc;
			}
		}
	}
}
//Kruskal �㷨
//�ò��鼯����ʵ���˲����л�
typedef struct Edge{
	int a,b;
	int weight;
};
int parents[20];
void Initial(int S[])
{
	for(int i=0;i<MaxSize;i++)
	{
		S[i]=-1;
	}
}
int Find(int S[],int x)
{
	while(S[x]>=0)
		x=S[x];
	return x;
}
int Union(int S[],int root1,int root2)
{
	S[root2]=root1;
}
void heap_sort(Edge *edge)
{

}
void MST_Kruskal(Graph G,Edge edge[],int parents[])
{
	heap_sort(edge);
	Initial(parents);
	for(int i=0;i<arcnum;i++)
	{
	    int root1=Find(parents,edge[i].a);
	    int root2=Find(parents,edge[i].b);
	    if(root1!=root2)
	    {
	    	Union(parents,root1,root2);
	    }
	}
}