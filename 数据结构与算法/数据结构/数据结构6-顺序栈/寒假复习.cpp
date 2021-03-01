#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
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
