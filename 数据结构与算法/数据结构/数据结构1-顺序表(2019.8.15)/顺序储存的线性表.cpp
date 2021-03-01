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
//本源代码涵盖基本的顺序储存的线性表的基本运算
//main函数可以完成建立一组数并对其进行move1函数对应操作
//完成时间8.13-8.16，线性表顺序储存部分基本了解。
void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
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
void DestroyList(SqList *&L)
{
	free(L);
	L=NULL;
	cout<<"数据清除已完成"<<endl;
}
bool ListEmpty(SqList *L)
{
	return (L->length==0);
}
int LIstLength(SqList *L)
{
	return (L->length);
}
void DispList(SqList *L)
{
	int i;
	if(ListEmpty(L))return;
	for(i=0;i<L->length;i++)
		cout<<L->data[i]<<"\t";
	cout<<endl;
}
bool GetElem(SqList *L,int i,int &e)
{
	if (i<0||i>L->length)return false;
	e=L->data[i-1];
	return true;
}
int LocateElem(SqList *L,int e)
{
	int i=0;
	while(i<L->length&&L->data[i]!=e)
		i++;
	if(i>=L->length)return 0;
	else return i+1;
}
bool ListInsert1(SqList *&L,int i,int e)//自我设计版
{
	int j=0,k;
	if(i<0||i>=L->length)return false;
	while(j<i-1)j++;
	for(k=0;k<=L->length-j;j++)
		L->data[L->length-k+1]=L->data[L->length-k];
	L->data[j]=e;
	L->length++;
	return true;
}
bool ListInsert2(SqList *&L,int i,int e)//PPT
{
	int j;
	if(i<0||i>=L->length)return false;
	i--;//将逻辑位序转换为物理位序
	for(j=L->length;j>i;j--)
	{
		L->data[j]=L->data[j-1];
	}
	L->data[j]=e;
	L->length++;
	return true;
}
bool ListDelete1(SqList *&L,int i,int &e)//带返回值的
{
	int j=0;
	if(i<0||i>L->length)return false;
	i--;
	e=L->data[i];
	for(int j=i;j<=L->length-1;j++)
	{
		L->data[j]=L->data[j+1];
	}
	L->length--;
	return true;
}
bool ListDelete2(SqList *&L,int i)//不带返回值的
{
	int j=0;
	if(i<0||i>L->length)return false;
	i--;
	for(int j=i;j<=L->length-1;j++)
	{
		L->data[j]=L->data[j+1];
	}
	L->length--;
	return true;
}
//练习一：设计一个时间复杂度为O（n），空间复杂度为O（1）的程序，删除线性表中所有为x的数据。
void delnode1(SqList *&A,int x)//复用原空间相当于把自己当成另外一个线性表，注意最后改变长度
{
	int k=0,i;
	for(i=0;i<A->length;i++)//注意细节这个i是逻辑位序
	{
		if(A->data[i]!=x)
		{
			A->data[k]=A->data[i];
			k++;
		}
	}
	A->length=k;
}
void delnode2(SqList *&A,int x)//引入变化的k，来动态控制前移量，注意最后改变长度
{
	int k=0,i;
	for(i=0;i<A->length;i++)
	{
		if(A->data[i]==x)
			k++;
		else
			A->data[i-k]=A->data[i];
	}
	A->length=A->length-k;
}
void move1(SqList *&L)//总体思路是交换，注意要先让j开始向前扫描，再让i向后扫描。
{
	int i=0,j=L->length-1;
	int tmp;
	int pivot=L->data[0];
	while(i<j)
	{
		while(i<j&&L->data[j]>pivot)
			j--;
		while(i<j&&L->data[i]<=pivot)
			i++;
		if(i<j)
			{
				tmp=L->data[i];
				L->data[i]=L->data[j];
				L->data[j]=tmp;
		}
	}
	L->data[0]=L->data[j];
	L->data[j]=pivot;
}
void move2(SqList *&L)//总体思路是扫描再放置，
{
	int i=0,j=L->length-1;
	int tmp=L->data[0];
	int pivot=L->data[0];
	while(i<j)
	{
		while(i<j&&L->data[j]>pivot)
			j--;
		L->data[i]=L->data[j];
		while(i<j&&L->data[i]<=pivot)
			i++;
		L->data[j]=L->data[i];
	}
	L->data[i]=pivot;
}
void flag(SqList *&L)//将一组数（只有0、1、2）分成0在左1在中2在右。
	//这个if选择时，j++单独给0、2都行，不给也行，但是不能都给。
	//不过我觉得完全没必要非要写一个j++，只在1时给就行了，分析还简单。
{
	int i=-1,j=0,k=L->length;
	while(j<k)
	{
		if(L->data[j]==0)
		{
			i++;
			swap(L->data[j],L->data[i]);
		}
		else if(L->data[j]==2)
		{
			k--;
			swap(L->data[j],L->data[k]);
		}
		else if(L->data[j]==1)
			j++;
	}
}
void main()
{
	SqList *K;
	InitList(K);
	PrepareList(K);
	DispList(K);
	flag(K);
	DispList(K);
	DestroyList(K);
}
