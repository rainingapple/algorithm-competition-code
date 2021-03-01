#include<iostream>
using namespace std;
typedef struct{
	int elem[20];
	int TableLen;
}SeqList;
//顺序查找与折半查找
//第13题
int Binary_Search(SeqList ST,int low,int high,int key)
{
	int mid=low+(high-low)/2;           //这样写不怕溢出，万无一失
	if(low>high)
		return -1;                //别忘了这个
	if(ST.elem[mid]==key)
		return mid;
	else if(ST.elem[mid]>key)
		return Binary_Search(ST,low,mid-1,key);
	else
		return Binary_Search(ST,mid+1,high,key);
}