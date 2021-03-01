#include<iostream>
using namespace std;
//双亲表示法
#define ElemType int
#define MaxSize 10
typedef struct{
	ElemType data;
	int parent;
}PTNode;
typedef struct{
	PTNode Nodes[MaxSize];
	int n;
}PTree;
//孩子表示法
typedef struct{
	int child;//孩子结点下标
	struct CNode *next;
}CNode;
typedef struct{
	ElemType data;
	struct CNode *child;
}PNode;
typedef struct{
	PNode Nodes[MaxSize];
	int n;
}CTree;
//左孩子右兄弟表示法
typedef struct{
	ElemType data;
	struct CSNode *firstchild,*nextsibling;
}CSNode,CSTree;