#include<iostream>
using namespace std;
typedef struct{
	int elem[20];
	int TableLen;
}SeqList;
int Binary_Search(SeqList *L,int key)
{
	int low=0,high=L->TableLen-1;
	int mid=(low+high)/2;
	while(low<=high)                  //注意必须是low<=high,否则在low=high时那个点就比较不了了
	{
		if(L->elem[mid]==key)
			return mid;
		else if(L->elem[mid]<key)
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	return -1;         //别忘了，假如查找失败，返回-1；
}