#include<iostream>
using namespace std;
#define MaxSize 10

int UFSets[MaxSize];
void Initial(int S[])
{
	for(int i=0;i<MaxSize;i++)
	{
		S[i]=-1;
	}
}
int Find(int S[],int x)
{
	while(S[x]>=0)
		x=S[x];
	return x;
}
int Union(int S[],int root1,int root2)
{
	S[root2]=root1;
}