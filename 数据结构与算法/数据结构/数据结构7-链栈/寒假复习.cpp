#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef struct Linknode
{
	int data;
	Linknode *next;
}LiStack;
void InitStack(LiStack *&S)
{
	S=(LiStack*)malloc(sizeof(LiStack));
	S->next=NULL;
}
void DestroyStack(LiStack *&S)
{
	LiStack *p=S,*q=S->next;
	while(q!=NULL)
	{
		free(p);
		p=q;
		q=q->next;
	}
	free(p);
}
bool StackEmpty(LiStack *S)
{
	return (S->next==NULL);
}
void Push(LiStack *S,int e)//链栈理论上不会满
{
	LiStack *s;
	s=(LiStack*)malloc(sizeof(LiStack));
	s->data=e;
	s->next=S->next;
	S->next=s;
}
bool Pop(LiStack *S,int &e)
{
	if(S->next==NULL)
		return false;
	LiStack *p=S->next;
	S->next=p->next;
	e=p->data;
	free(p);
	return true;
}
bool GetTop(LiStack *S,int &e)
{
	if(S->next==NULL)
		return false;
	e=S->next->data;
	return true;
}