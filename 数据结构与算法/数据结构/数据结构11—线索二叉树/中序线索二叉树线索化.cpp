#include<iostream>
using namespace std;
typedef struct ThreadTNode{
	int data;
	ThreadTNode *lchild,*rchild;
	int ltag,rtag;
}ThreadTree;
void InThread(ThreadTree *&T,ThreadTree *&Pre)
{
	if(T==NULL)
		return;
	InThread(T->lchild,Pre);
	if(T->lchild==NULL)
	{
		T->lchild=Pre;
		T->ltag=1;
	}
	if(Pre!=NULL&&Pre->rchild==NULL)
	{
		Pre->rchild=T;
		Pre->rtag=1;
	}
	Pre=T;
	InThread(T->rchild,Pre);
}
void CreateThread(ThreadTree *T)
{
	ThreadTNode *Pre=NULL;
	if(T==NULL)
		return;
	InThread(T,Pre);
	Pre->rchild=NULL;
	Pre->rtag=1;
}