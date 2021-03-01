#include<stdio.h>
#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;
typedef struct 
{
	int data[12];
	int length;
}SqList;
bool InsertList(SqList &L,int i,int e)
{
	if(i<1||i>L.length+1)
		return false;
	for(int j=L.length;j>=i;j--)
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;
	L.length++;
	return true;
}
bool DeleteList(SqList &L,int i,int &e)
{
	if(i<1||i>L.length)
		return false;
	e=L.data[i-1];
	for(int j=i;j<L.length;j++)
	{
		L.data[j-1]=L.data[j];
	}
	L.length--;
	return true;
}

typedef struct node{
	int exp;
	int data;
	node *next;
};
void free(node *t)
{
}
void Polyaddition(node *Ah,node *Bh)
{
	node *qa=Ah->next;
	node *qb=Bh->next;
	node *s;
	node *prior;
	while(qa!=NULL&&qb!=NULL)
	{
		if(qa->exp==qa->exp)
		{
			if(qa->data+qb->data!=0)
			{
				qa->data=qa->data+qb->data;
				s=qb;
				qb=qb->next;
				free(qb);
				prior=qa;
				qa=qa->next;
			}
			else
			{
				prior->next=qa->next;
				s=qa;qa=qa->next;free(s);
				s=qb;qb=qb->next;free(s);
			}
		}
		else
		{
			if(qa->exp<qb->exp)//����ط�������ʦ���ִ����ʱ�������
				//�Ҷ����������������������˼�ǣ�qa������ڵ�ָ��ֵ��qbС�������¸��ڵ�Ҳ�ᣬ����Ҳ����˵���ѱȽ��ƶ����˺���
			{
				prior=qa;
				qa=qa->next;
			}
			else
			{
				prior->next=qb;
				prior=qb;
				qb=qb->next;
				prior->next=qa;
			}
		}
	}
}