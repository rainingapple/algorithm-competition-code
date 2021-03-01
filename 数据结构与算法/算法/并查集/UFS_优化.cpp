/*#include<iostream>
using namespace std;
const int MaxV = 1005;
int father[MaxV];
int n;

int findfather(int x)
{
	int a = x;
	while (father[x] != x)
		x = father[x];
	while (father[a] != a)
	{
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
}*/

/*int findfather(int x)
{
	if (father[x] == x)
		return x;
	else
	{
		int F = findfather(father[x]);//注意这里不能写成x，会变成死循环的。
		father[x] = F;
		return F;
	}
}*/