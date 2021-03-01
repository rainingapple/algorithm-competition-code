#include<iostream>
using namespace std;
//直接选择排序
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



//堆排序
void BuildMaxHeap(int A[],int len)
{
	for(int i=len/2;i>=1;i--)
		AdjustDown(A,i,len);
}
void AdjustDown(int A[],int k,int len)
{
	A[0]=A[k];
	for(int i=  2*k;i<=len;i*=2)           //显然，首次循环会让第h-1层与第h层排序完毕，那么这样的话在上面的地方却不能和地下两层一样
	{
		if(i<len&&A[i]<A[i+1])           //因为这个里面，她的根节点与孩子节点比较，他是完成了与孩子节点相比的最小，但是无法保证下面
			i++;                         //就是说他会破坏下层的结构，所以要在整合一编。
		if(A[0]>A[i])
			break;
		else
		{
			A[k]=A[i];
			k=i;
		}
	}
	A[k]=A[0];              //因为这个里面k死死地跟着就是当初的根节点换到哪了，他就是哪，所以A【k】=A【0】
}
void HeapSort(int A[],int len)
{
	BuildMaxHeap(A,len);
	for(int i=len;i>1;i++)
	{
		swap(A[i],A[1]);
		AdjustDown(A,1,i-1);                    //注意这个里面一旦换了A【i】实际上就是完成了对她的输出，所以只需要再弄一边前n-1就行了
	}
}
void Adjustup(int A[],int len)         ///这个是我写的，少用一个额外存储空间
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
void Adjustup(int A[],int k,int len) //课件那种
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