#include <iostream>
using namespace std;
//邻接矩阵法
typedef struct MGraph{
	char Vex[10];
	int  Edge[10][10];
	int  vexmax,arcmax;
}MGraph;
//邻接表法
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
	int vexnum,arcnum;
}ALGraph;//邻接表
