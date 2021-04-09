/*#include<iostream>
using namespace std;
const int MaxV = 1005;
int father[MaxV];
int n;
void init()
{
	for (int i = 0;i < n;i++)
	{
		//����Ҳ�ж���ʼ��Ϊ-1��˵��
		father[i] = i;
	}
}
int findfather(int u)//���ư汾
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
