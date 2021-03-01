#include<iostream>
using namespace std;
//ц╟ещеепР
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void BubbleSort(int A[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int flag=false;
		for(int j=n-1;j>i;j--)
		{
			if(A[j-1]>A[j])
			{
				swap(A[j-1],A[j]);
				flag=true;
			}
		}
		if(flag==false)
			return;
	}
}
//©ЛкыеепР
int partition(int A[],int low,int high)
{
	int pivot=A[low];
	while(low<high)
	{
		while(low<high&&A[high]>=pivot)
		    high--;
	    A[low]=A[high];
	    while(low<high&&A[low]<=pivot)
		    low++;
	    A[high]=A[low];
	}
	A[low]=pivot;
	return low;
}
void QuickSort(int A[],int low,int high)
{
	if(low<high)
	{
		int pivotpos=partition(A,low,high);
		QuickSort(A,low,pivotpos-1);
		QuickSort(A,pivotpos+1,high);
	}
}