#include<iostream>
using namespace std;

typedef struct ArcNode{
	int tailvex,headvex;
	ArcNode *hlink,*tlink;
}ArcNode;
typedef struct{
	int data;
	ArcNode *firstin,*firstout;
}VNode;
typedef struct{
	VNode xlist[20];
	int vexnum,arcnum;
}GLGraph;
