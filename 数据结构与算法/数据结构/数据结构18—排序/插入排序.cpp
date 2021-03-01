#include<iostream>
using namespace std;
//交换排序：直接插入排序、折半插入排序、希尔排序
//*****************************************************直接插入排序********************************************


//下面这个是我自己根据算法思想写的
//毫无疑问是对的，但是相比于答案，复杂度肯定是更高的
//答案从后往前，把比较与移动统一在一个循环中，显然更加完美
//答案的那个A【0】，就和我这个里面的temp是一样的
void InsertSort(int A[],int n)
{
	int k;
	int temp;
	for(int i=0;i<n;i++)
	{
		temp=A[i];
		for(int j=0;j<=i;j++)
		{
			if(A[j]>=A[i])
			{
				k=j;
				break;
			}
		}
		for(int s=i;s>k;s--)
		{
			A[s]=A[s-1];
		}
		A[k]=temp;
	}
}
//更改后的版本
//更加简洁，更加高效
void InsertSort(int A[],int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		if(A[i]<A[i-1])//这个是教材上加的，我觉得加的蛮好的
		{
			A[0]=A[i];
			A[i]=A[i-1];              
			for(j=i-2;A[j]>A[0];j--)
				A[j+1]=A[j];
			A[j+1]=A[0];
		}
	}
}
//*****************************折半排序**************************
//说明：
//1.low初始化是1，不是传统的0；
//2.最后插入位置不是mid，而是high+1或者low，一定要注意
void BInsertSort(int A[],int n)
{
	int high;
	int low;
	int mid;
	int i,j;
	for(int i=2;i<=n;i++)
	{
		if(A[i]<A[i-1])
		{
			low=0;
			high=i-1;
			A[0]=A[i];
			while(low<=high)
			{
				mid=(low+high)/2;
				if(A[mid]<A[0])
					low=mid+1;
				else
					high=mid-1;
			}
			for(j=i-1;j>=high+1;j--)
				A[j+1]=A[j];
			A[high+1]=A[0];
		}
	}
}
//***************************************希尔排序*************************************
void ShellSort(int A[],int n)
{
	int i,j;
	for(int dk=n/2;dk>=1;dk=dk/2)
	{
		for(i=1+dk;i<=n;i++)
		{
			if(A[i]<A[i-dk])
			{
				A[0]=A[i];
				for(j=i-dk;j>0&&A[0]<A[j];j=j-dk)//别忘了j>0这个条件
					A[j+dk]=A[j];
				A[j+dk]=A[0];
			}
		}
	}
}