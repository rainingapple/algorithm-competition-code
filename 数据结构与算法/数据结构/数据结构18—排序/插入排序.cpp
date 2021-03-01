#include<iostream>
using namespace std;
//��������ֱ�Ӳ��������۰��������ϣ������
//*****************************************************ֱ�Ӳ�������********************************************


//������������Լ������㷨˼��д��
//���������ǶԵģ���������ڴ𰸣����Ӷȿ϶��Ǹ��ߵ�
//�𰸴Ӻ���ǰ���ѱȽ����ƶ�ͳһ��һ��ѭ���У���Ȼ��������
//�𰸵��Ǹ�A��0�����ͺ�����������temp��һ����
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
//���ĺ�İ汾
//���Ӽ�࣬���Ӹ�Ч
void InsertSort(int A[],int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		if(A[i]<A[i-1])//����ǽ̲��ϼӵģ��Ҿ��üӵ����õ�
		{
			A[0]=A[i];
			A[i]=A[i-1];              
			for(j=i-2;A[j]>A[0];j--)
				A[j+1]=A[j];
			A[j+1]=A[0];
		}
	}
}
//*****************************�۰�����**************************
//˵����
//1.low��ʼ����1�����Ǵ�ͳ��0��
//2.������λ�ò���mid������high+1����low��һ��Ҫע��
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
//***************************************ϣ������*************************************
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
				for(j=i-dk;j>0&&A[0]<A[j];j=j-dk)//������j>0�������
					A[j+dk]=A[j];
				A[j+dk]=A[0];
			}
		}
	}
}