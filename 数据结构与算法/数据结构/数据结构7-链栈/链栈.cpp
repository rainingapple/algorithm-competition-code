#include<iostream>
#include<stdio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef struct linknode
{
	char data;
	struct linknode *next;
}Listack;
void InitStack(Listack *&s)
{
	s=(Listack*)malloc(sizeof(Listack));
	s->next=NULL;
}
void DestroyStack(Listack *&s)
{
	Listack *p=s,*q=s->next;
	while(q!=s->next)
	{
		free(p);
		p=q;
		q=q->next;
	}
	free(p);
}
bool StackEmpty(Listack *s)
{
	return(s->next==NULL);
}
void Push(Listack *&s,int e)
{
	Listack *p;
	p=(Listack*)malloc(sizeof(Listack));
	p->data=e;
	p->next=s->next;
	s->next=p;
}
bool Pop(Listack *&s,int &e)
{
	Listack *p;
	if(s->next=NULL)
		return false;
	p=s->next;
	s->next=p->next;
	e=p->data;
	free(p);
	return true;
}
bool GetTop(Listack *s,int &e)
{
	if(s->next=NULL)
		return false;
	e=s->next->data;
	return true;
}
int match(int a[],int n)//了解思想后，独自一遍完成
{
	Listack *s;
	int i=0;
	int e;
	s=(Listack*)malloc(sizeof(Listack));
	s->next=NULL;
	int match=1;
	while(i<=n&&match==1)
	{
		if(a[i]==0)
			Push(s,a[i]);
		else if(a[i]==1)
		{
			if(GetTop(s,e))
			{
				if(e!=0)
					match=0;
				else
					Pop(s,e);
			}
			else
				match=0;
		}
		i++;
	}
	if(s->next!=NULL)//小瑕疵
		match=0;
	DestroyStack(s);//记得销毁栈
	return match;
}
void main()
{
	int a[]={0,0};
	int s;
	s=match(a,5);
	cout<<s;
}
