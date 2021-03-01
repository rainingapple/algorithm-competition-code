/*#include<iostream>
using namespace std;
const int MaxV = 1005;
int father[MaxV];
int n;
void init()
{
	for (int i = 0;i < n;i++)
	{
		//这里也有都初始化为-1的说法
		father[i] = i;
	}
}
int findfather(int u)//递推版本
{
	while (father[u] != u)
		u = father[u];
	return u;
}
void Union(int x, int y)
{
	int dadA = findfather(x);
	int dadB = findfather(y);
	if (dadA != dadB)
		father[dadA] = dadB;
}*/
