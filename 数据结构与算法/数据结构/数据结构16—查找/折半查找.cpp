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
	while(low<=high)                  //ע�������low<=high,������low=highʱ�Ǹ���ͱȽϲ�����
	{
		if(L->elem[mid]==key)
			return mid;
		else if(L->elem[mid]<key)
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	return -1;         //�����ˣ��������ʧ�ܣ�����-1��
}