/*#include<iostream>
using namespace std;
bool fuc1(int y)//ÅÐ¶ÏÊÇ·ñÎªÈòÄê
{
	bool b = (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
	return b;
}
int main()
{
	int y, d;
	int s[12] = { 31 };
	cin >> y >> d;
	if (fuc1(y))
	{
		int m[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		for (int i = 1;i < 12;i++)
		{
			s[i] = s[i - 1] + m[i];
		}
	}
	else
	{
		int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		for (int i = 1;i < 12;i++)
		{
			s[i] = s[i - 1] + m[i];
		}
	}
	int k = 0;
	while (k < 12 && d > s[k])
		k++;
	int y2 = d - s[k - 1];
	cout << k+1 <<endl<< y2;
	return 0;
}*/