#include <iostream>
using namespace std;
#define ElemType BiTNode
#define MaxSize 5
typedef struct BiTNode{
	int data;
	BiTNode *lchild,*rchild;
}BiTree;
typedef struct
{
	ElemType *data[MaxSize];
	int front,rear;
}SqQueue;
void visit(BiTree *T)
{
}
bool isEmpty(SqQueue *Q)
{
	return Q->front==Q->rear;
}
bool EnQueue(SqQueue *&q,ElemType *e)
{
	if(q->rear==MaxSize-1)
		return false;
	q->rear++;
	q->data[q->rear]=e;
	return true;
}
bool DeQueue(SqQueue *&q,ElemType *e)
{
	if(q->front==q->rear)
		return false;
	q->front++;
	e=q->data[q->front];
	return true;
}
//没看代码，自主研发，哈哈哈哈哈哈哈哈哈哈哈哈
void LevelOrder(BiTree *T,SqQueue *Q)
{
	visit(T);
	BiTNode *p=T;
	EnQueue(Q,T->lchild);
	EnQueue(Q,T->rchild);
	while(!isEmpty(Q))
	{
		DeQueue(Q,p);
		visit(p);
		if(p->lchild!=NULL)//这里像课上给出的去加一个if语句是很不错的
		EnQueue(Q,p->lchild);
		if(p->rchild!=NULL)
		EnQueue(Q,p->rchild);
	}
}