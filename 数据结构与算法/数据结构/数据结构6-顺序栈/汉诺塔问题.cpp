#include <iostream>
using namespace std;
typedef struct node{
	char x,y,z;
	int n;
}node;
typedef struct{
	int data[10];
	int top;
}SqStack;
void InitStack(SqStack *&S)
{
	S=(SqStack*)malloc(sizeof(SqStack));
	S->top==-1;
}
bool StackEmpty(SqStack *S)
{
	if(S->top==-1)
		return true;
	else
		return false;
}
bool Push(SqStack *&S,int e)
{
	if(S->top==9)
		return false;
	S->data[++S->top]=e;
	return true;
}
bool Pop(SqStack *&S,int &e)
{
	if(S->top==-1)
		return false;
	e=S->data[S->top--];
	return true;
}
bool ReadTop(SqStack *S,int &e)
{
	if(S->top==-1)
		return false;
	e=S->data[S->top];
	return true;
}
void Hanoi(int n,int x,int y,int z)
{
	SqStack *S;
	node e;
	char t;
	e.n=n;e.x=x;e.y=y;e.z=z;
	Push(S,e)
}