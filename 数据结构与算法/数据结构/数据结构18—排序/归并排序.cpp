#include<iostream>
using namespace std;

int *B=(int *)malloc((20+1)*sizeof(int));
//��ȫ�Լ��ִ�Ĵ���
//�������ǶԵ�
//����û�����B��������ĺ��壬B��Ϊ����Ϊһ������Ӱ��ıȽ����飬������бȽ϶��趨������ʵ������Ҫ��B���Ƶ�A
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