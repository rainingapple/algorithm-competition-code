#include<iostream>
using namespace std;
typedef struct {
	int ch[255];
	int length;
}SString;
typedef struct {
	int *ch;
	int length;
}HString;
int next[20];
//��ͨ�汾���Ǹ�O(mn)�İ汾
int Index(SString S,SString T,int pos)
{
	int i=pos,j=1;
	while(i<=S.length&&j<=T.length)
	{
		if(S.ch[i]==T.ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i=i-j+2;
			j=1;
		}
		if(j>T.length)
		{
			return i=T.length;
		}
		else
			return 0;
	}
}
//KMP�㷨���������
//�Ҿ�������㷨�����������������㷨
void get_next(int next[],SString T)
{
	int i=1;
	int j=0;
	next[1]=0;
	while(i<20)
	{
		if(j==0||T.ch[i]==T.ch[j])
		{
			i++;
			j++;
			next[i]=j;
		}
		else
		{
			j=next[j];
		}
	}
}
int KMP_Index(SString S,SString T,int pos,int next[])
{
	int i=pos;
	int j=1;
	while(i<=S.length&&j<=T.length)
	{
		if(j==0||S.ch[i]==T.ch[j])             //�����j==0�ӽ�ȥ���Ը��죬����Ҳ����ν
		{
			i++;
			j++;
		}
		else
		{
			j=next[j];
		}
	}
	if(j>T.length)
		return i-T.length;
	else
		return 0;
}