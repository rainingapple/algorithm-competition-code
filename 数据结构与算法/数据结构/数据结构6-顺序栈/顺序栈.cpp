#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef struct 
{
	int data[10];
	int top;
}SqStack;
void InitStack(SqStack *&s)
{
	s=(SqStack*)malloc(sizeof(SqStack));
	s->top=-1;
}
void DestroyStack(SqStack *&s)
{
	free(s);
}
bool StackEmpty(SqStack *s)
{
	return (s->top==-1);
}
bool Push(SqStack *s,char e)
{
	if(s->top==9)
		return false;
	s->top++;
	s->data[s->top]=e;
	return true;
}
bool Pop(SqStack *&s,char &e)
{
	if(s->top==-1)
		return false;
	e=s->data[s->top];
	s->top--;
	return true;
}
bool GetTop(SqStack *s,char &e)
{
	if(s->top==-1)
		return false;
	e=s->data[s->top];
	return true;
}
int symmetry(char str[],int n)//这个和PPT上的多少有点不一样，因为有关于字符串的实在难以操控，所以引入变量n来辅助。
{
	int i;
	char e;
	SqStack *st;
	InitStack(st);
	for(i=0;i<=n;i++)
		Push(st,str[i]);
	for(i=0;i<=n;i++)
	{
		Pop(st,e);
		if(str[i]!=e)
		{
			DestroyStack(st);
			return 0;
		}
	}
	DestroyStack(st);
	return 1;
}
void main()
{
	int a;
	char str[3]={'1','2','1'};
	a=symmetry(str,2);
	cout<<a;
}



