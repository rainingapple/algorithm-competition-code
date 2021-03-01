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
//普通版本，那个O(mn)的版本
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
//KMP算法，秀上天际
//我觉得这个算法是整本书最难理解的算法
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
		if(j==0||S.ch[i]==T.ch[j])             //这个把j==0加进去可以更快，但是也无所谓
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