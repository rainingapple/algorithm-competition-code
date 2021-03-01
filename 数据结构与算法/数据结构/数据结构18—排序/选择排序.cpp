#include<iostream>
using namespace std;
//ֱ��ѡ������
void SelectSort(int A[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
				min=j;
		}
		if(min!=i)
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
}



//������
void BuildMaxHeap(int A[],int len)
{
	for(int i=len/2;i>=1;i--)
		AdjustDown(A,i,len);
}
void AdjustDown(int A[],int k,int len)
{
	A[0]=A[k];
	for(int i=  2*k;i<=len;i*=2)           //��Ȼ���״�ѭ�����õ�h-1�����h��������ϣ���ô�����Ļ�������ĵط�ȴ���ܺ͵�������һ��
	{
		if(i<len&&A[i]<A[i+1])           //��Ϊ������棬���ĸ��ڵ��뺢�ӽڵ�Ƚϣ�����������뺢�ӽڵ���ȵ���С�������޷���֤����
			i++;                         //����˵�����ƻ��²�Ľṹ������Ҫ������һ�ࡣ
		if(A[0]>A[i])
			break;
		else
		{
			A[k]=A[i];
			k=i;
		}
	}
	A[k]=A[0];              //��Ϊ�������k�����ظ��ž��ǵ����ĸ��ڵ㻻�����ˣ��������ģ�����A��k��=A��0��
}
void HeapSort(int A[],int len)
{
	BuildMaxHeap(A,len);
	for(int i=len;i>1;i++)
	{
		swap(A[i],A[1]);
		AdjustDown(A,1,i-1);                    //ע���������һ������A��i��ʵ���Ͼ�������˶��������������ֻ��Ҫ��Ūһ��ǰn-1������
	}
}
void Adjustup(int A[],int len)         ///�������д�ģ�����һ������洢�ռ�
{
	int i;
	A[0]=A[len];
	for(i=len;i>1;i=i/2)
	{
		if(A[i]<=A[i/2])
			break;
		else
		{
			A[i]=A[i/2];
		}
	}
	A[i]=A[0];
}
void Adjustup(int A[],int k,int len) //�μ�����
{
	A[0]=A[k];
	for(int i=k/2;i>=1;i=i/2)
	{
		if(A[i]<A[k])
			break;
		else
		{
			A[k]=A[i];
			k=i;
		}
	}
	A[k]=A[0];
}
void HeapInsert(int A[],int len,int i)
{
	A[len+1]=i;
	Adjustup(A,len+1);
}