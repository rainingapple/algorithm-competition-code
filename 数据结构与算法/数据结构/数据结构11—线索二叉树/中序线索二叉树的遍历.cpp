#include<iostream>
using namespace std;
typedef struct ThreadTNode{
	int data;
	ThreadTNode *lchild,*rchild;
	int ltag,rtag;
}ThreadTree;
ThreadTree *FirstNode(ThreadTree *p)
{
	while(p->ltag==0)
		p=p->lchild;
	return p;
}
ThreadTree *NextNode(ThreadTree *p)
{
	if(p->rtag==0)
		return FirstNode(p->rchild);
	else
		return p->rchild;
}
void visit(ThreadTree *T)
{

}
void InOrder(ThreadTree *T)
{
	for(ThreadTree *p=FirstNode(T);p!=NULL;p=NextNode(p))
		visit(p);
}