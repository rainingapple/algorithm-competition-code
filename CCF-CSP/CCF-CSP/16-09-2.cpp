//浙大那个人的方法挺好，可以借鉴
/*#include<iostream>
using namespace std;
int a[20][5] = {};
bool seek(int n)
{
	int flag = false;
	for (int i = 0;i < 20;i++)
	{
		int mark = 0;
		for (int j = 0;j < 5;j++)
		{
			if (a[i][j] == 0)
			{
				mark++;
				if (mark == n)
				{
					flag = true;
					int k = j - n + 1;
					while (n--)
					{
						a[i][k] = 1;
						cout << i * 5 + k + 1 << " ";
						k++;
					}
					cout << endl;
					return flag;
				}
			}
		}
	}
	return flag;
}
void mode2(int n)
{
	for (int i = 0;i < 20;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (a[i][j] == 0)
			{
				cout << i * 5 + j + 1 << " ";
				n--;
				if (n == 0)
				{
					cout << endl;
					return;
				}
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		int pick;
		cin >> pick;
		bool p = seek(pick);
		if (!p)
		{
			mode2(pick);
		}
	}
	return 0;
}*/