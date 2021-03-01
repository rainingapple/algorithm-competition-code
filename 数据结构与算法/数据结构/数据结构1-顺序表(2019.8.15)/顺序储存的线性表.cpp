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
//��Դ���뺭�ǻ�����˳�򴢴�����Ա�Ļ�������
//main����������ɽ���һ�������������move1������Ӧ����
//���ʱ��8.13-8.16�����Ա�˳�򴢴沿�ֻ����˽⡣
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
	cout<<"��ʼ�������"<<endl;
}
void PrepareList(SqList *&L)
{
	int i=0;
	for(;i<=L->length-1;i++)
	{
		cout<<"�������"<<i+1<<"������"<<endl;
		cin>>L->data[i];
	}
}
void DestroyList(SqList *&L)
{
	free(L);
	L=NULL;
	cout<<"������������"<<endl;
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
bool ListInsert1(SqList *&L,int i,int e)//������ư�
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
	i--;//���߼�λ��ת��Ϊ����λ��
	for(j=L->length;j>i;j--)
	{
		L->data[j]=L->data[j-1];
	}
	L->data[j]=e;
	L->length++;
	return true;
}
bool ListDelete1(SqList *&L,int i,int &e)//������ֵ��
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
bool ListDelete2(SqList *&L,int i)//��������ֵ��
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
//��ϰһ�����һ��ʱ�临�Ӷ�ΪO��n�����ռ临�Ӷ�ΪO��1���ĳ���ɾ�����Ա�������Ϊx�����ݡ�
void delnode1(SqList *&A,int x)//����ԭ�ռ��൱�ڰ��Լ���������һ�����Ա�ע�����ı䳤��
{
	int k=0,i;
	for(i=0;i<A->length;i++)//ע��ϸ�����i���߼�λ��
	{
		if(A->data[i]!=x)
		{
			A->data[k]=A->data[i];
			k++;
		}
	}
	A->length=k;
}
void delnode2(SqList *&A,int x)//����仯��k������̬����ǰ������ע�����ı䳤��
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
void move1(SqList *&L)//����˼·�ǽ�����ע��Ҫ����j��ʼ��ǰɨ�裬����i���ɨ�衣
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
void move2(SqList *&L)//����˼·��ɨ���ٷ��ã�
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
void flag(SqList *&L)//��һ������ֻ��0��1��2���ֳ�0����1����2���ҡ�
	//���ifѡ��ʱ��j++������0��2���У�����Ҳ�У����ǲ��ܶ�����
	//�����Ҿ�����ȫû��Ҫ��Ҫдһ��j++��ֻ��1ʱ�������ˣ��������򵥡�
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
