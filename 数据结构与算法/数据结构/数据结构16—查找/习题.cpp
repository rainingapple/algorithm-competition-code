#include<iostream>
using namespace std;
typedef struct{
	int elem[20];
	int TableLen;
}SeqList;
//˳��������۰����
//��13��
int Binary_Search(SeqList ST,int low,int high,int key)
{
	int mid=low+(high-low)/2;           //����д�������������һʧ
	if(low>high)
		return -1;                //���������
	if(ST.elem[mid]==key)
		return mid;
	else if(ST.elem[mid]>key)
		return Binary_Search(ST,low,mid-1,key);
	else
		return Binary_Search(ST,mid+1,high,key);
}