#include<iostream>
using namespace std;
/*typedef struct ArcNode{
	int ivex,jvex;
	ArcNode *ilink,*jlink;
}ArcNode;
typedef struct VNode{
	int data;
	ArcNode *firstedge;
}VNode;
typedef struct AMLGraph{
	VNode adjmulist[20];
	int vexnum,arcnum;
}AMLGraph;*/
typedef struct ArcNode{
	int ivex,jvex;
	ArcNode *ilink,*jlink;
}ArcNode;
typedef struct VNode{
	int data;
	ArcNode *FirstEdge;
}VNode;
typedef struct AMLNode{
	int adjmulist[20];
	int vexnum,arcnum;
}AMLGraph;