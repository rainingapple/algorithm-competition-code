#include<iostream>
using namespace std;
//˫�ױ�ʾ��
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
//���ӱ�ʾ��
typedef struct{
	int child;//���ӽ���±�
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
//�������ֵܱ�ʾ��
typedef struct{
	ElemType data;
	struct CSNode *firstchild,*nextsibling;
}CSNode,CSTree;