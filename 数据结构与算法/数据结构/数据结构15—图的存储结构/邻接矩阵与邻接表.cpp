#include <iostream>
using namespace std;
//�ڽӾ���
typedef struct MGraph{
	char Vex[10];
	int  Edge[10][10];
	int  vexmax,arcmax;
}MGraph;
//�ڽӱ�
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
	int vexnum,arcnum;
}ALGraph;//�ڽӱ�
