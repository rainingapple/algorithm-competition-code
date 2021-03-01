/*
//这道题不算太难，耗时大约80分钟，但是要知道在考试的时候我可能一分没有
//原因只是我的输出想当然的打了空格，一定一定要审题
//还有第一次遇见这种xy换轴的形况，绝大多数的时间都是浪费在改这个了
//80分钟的提交是90分，原因是没有考虑到多条线相交时‘+’保持，所以出错了
//这告诉我在相对复杂的模拟，一定要精心选择测试样例，否则甚至可能因为小的失误导致0分
#include<iostream>
#include <string>
#include<sstream>
using namespace std;
static char a[100][100];
int m, n, q, mode;
void fuc1(int x1,int y1,int x2,int y2)
{
	if (x1 > x2)
		swap(x1, x2);
	if (y1 > y2)
		swap(y1, y2);
	if (x1 == x2)
	{
		for (int i = y1;i <= y2;i++)
		{
			if (a[i][x1] == '-'||a[i][x1]=='+')
				a[i][x1] = '+';
			else
				a[i][x1] = '|';
		}
	}
	else
	{
		for (int i = x1;i <= x2;i++)
		{
			if (a[y1][i] == '|'|| a[y1][i] == '+')
				a[y1][i] = '+';
			else
				a[y1][i] = '-';
		}
	}
}
void attack(int x, int y, char c)
{
	if (a[y][x] == c)
		return;
	if (a[y][x] != '-' && a[y][x] != '+' && a[y][x] != '|' && x>-1 && x<m && y>-1 && y<n && a[y][x] != c)
	{
		a[y][x] = c;
		attack(x - 1, y, c);
		attack(x + 1, y, c);
		attack(x, y - 1, c);
		attack(x, y + 1, c);
	}
}
void fuc2(int x,int y,char c)
{
	attack(x, y, c);
}
int main()
{
	string bis,temp;//这个只是单纯的过滤而已
	cin >> m >> n >> q;
	getline(cin, bis);
	for (int i = 0;i < n;i++)
		for (int j = 0;j < m;j++)
			a[i][j] = '.';
	for (int i = 0;i < q;i++)
	{
		getline(cin, temp);
		stringstream ss(temp);
		ss >> mode;
		if (mode == 0)
		{
			int x1, y1, x2, y2;
			ss >> x1 >> y1 >> x2 >> y2;
			fuc1(x1,y1,x2,y2);
		}
		else
		{
			int x, y;
			char c;
			ss >> x >> y >> c;
			fuc2(x,y,c);
		}
	}
	for (int i = n-1;i > -1;i--)
	{
		for (int j = 0;j < m;j++)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}*/