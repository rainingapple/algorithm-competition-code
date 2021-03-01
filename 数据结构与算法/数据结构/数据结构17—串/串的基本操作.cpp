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
int Str_Sub(SString &Sub,SString S,int pos,int len)
{

}
int Str_Length(SString S)
{

}
int StrCompare(SString a,SString b)
{

}
int index(SString S,SString T,int pos)
{
	int m=Str_Length(S);
	int n=Str_Length(T);
	SString Sub;
	for(int i=pos;i<=n-m+1;i++)
	{
		Str_Sub(Sub,S,i,n);
		if(StrCompare(Sub,T)==0)
		{
			return i;
		}
	}
	return 0;
}