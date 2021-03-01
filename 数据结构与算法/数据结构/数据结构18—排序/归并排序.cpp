#include<iostream>
using namespace std;

int *B=(int *)malloc((20+1)*sizeof(int));
//完全自己手打的代码
//基本都是对的
//但是没有理解B辅助数组的含义，B是为了作为一个不受影响的比较数组，方便进行比较而设定，所以实际上是要将B复制到A
void Merge(int A[],int low,int mid,int high)
{
	int i,j,k;
	for(int i=low;i<=high;i++)
	{
		B[i]=A[i];
	}
	for(i=low,j=mid+1,k=low;i<=mid&&j<=high;k++)
	{
		if(A[i]<=A[j])
			A[k]=B[i++];
		else
			A[k]=B[j++];
	}
	while(i<=mid)
		A[k++]=B[i++];
	while(j<=high)
		A[k++]=B[j++];
}
void MergeSort(int A[],int low,int high)
{
	int mid=(low+high)/2;
	MergeSort(A,low,mid);
	MergeSort(A,mid,high);
	Merge(A,low,mid,high);
}