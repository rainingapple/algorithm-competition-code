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
void InitList(SqList *&L)
{
	L=(SqList*)malloc(sizeof(SqList));
	L->length=12;
	cout<<"初始化已完成"<<endl;
}
void PrepareList(SqList *&L)
{
	int i=0;
	for(;i<=L->length-1;i++)
	{
		cout<<"请输入第"<<i+1<<"个数据"<<endl;
		cin>>L->data[i];
	}
}
bool InsertList(SqList &L,int i,int e)
{
	if(i<1||i>L.length+1)
		return false;
	for(int j=L.length;j>=i;j--)
	{
		L.data[j]=L.data[j-1];
	}
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
int LocateList(SqList L,int e)
{
	for(int i=0;i<L.length;i++)
	{
		if(L.data[i]==e)
			return i+1;
	}
	return 0;
}
void max_and_min(SqList *L,int &min,int &max)
{
	min=max=L->data[0];
	for(int i=1;i<12;i++)
	{
		if(L->data[i]>max)
			max=L->data[i];
		if(L->data[i]<min)
			min=L->data[i];
	}
}
void reverse(SqList *&L)
{
	int i=0,j=10;
	while(i<j)
	{
		int temp;
		temp=L->data[i];
		L->data[i]=L->data[j];
		L->data[j]=temp;
		i++;
		j--;
	}
}
void merge(SqList *L1,SqList *L2,SqList *L,int n)//将L1与L2合并并保存在L中，L1、L2、L都是有序表，升序排列
{
	int i=0,j=0,k=0;
	while(i<n&&j<n)
	{
		if(L1->data[i]<=L2->data[j])
			L->data[k++]=L->data[i++];
		if(L1->data[i]>L2->data[j])
			L->data[k++]=L->data[j++];
	}
	while(i<n)
		L->data[k++]=L1->data[i++];
	while(j<n)
		L->data[k++]=L2->data[j++];
}
