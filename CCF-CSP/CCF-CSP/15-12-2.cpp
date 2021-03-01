//看过参考了吗，没什么区别
/*#include<iostream>
#include <list>
using namespace std;
struct node
{
	int a;
	bool b=true;
};
int main()
{
	int n, m;
	cin >> n >> m;
	node a[30][30];
	for (int i = 0;i < n;i++)
		for (int j = 0;j < m;j++)
			cin >> a[i][j].a;
	int flag=0;
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (a[i][j].a == flag)
			{
				sum++;
				if (sum == 3)
				{
					a[i][j - 2].b = false;
					a[i][j - 1].b = false;
					a[i][j].b = false;
				}
				if (sum > 3)
				{
					a[i][j].b = false;
				}
			}
			else
			{
				flag = a[i][j].a;
				sum = 1;
			}
		}
		sum = 0;
	}
	sum = 0;
	flag = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (a[j][i].a == flag)
			{
				sum++;
				if (sum == 3)
				{
					a[j - 2][i].b = false;
					a[j - 1][i].b = false;
					a[j][i].b = false;
				}
				if (sum > 3)
				{
					a[j][i].b = false;
				}
			}
			else
			{
				flag = a[j][i].a;
				sum = 1;
			}
		}
		sum = 0;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (a[i][j].b == true)
				cout << a[i][j].a;
			else
				cout << 0;
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}*/