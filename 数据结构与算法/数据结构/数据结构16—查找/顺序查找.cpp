#include<iostream>
using namespace std;
typedef struct{
	int elem[20];
	int TableLen;
}SSTable;
int Search_Seq(SSTable *ST,int key)
{
	int i;
	ST->elem[0]=key;
	for(i=ST->TableLen;ST->elem[i]!=key;i--);
	return i;
}