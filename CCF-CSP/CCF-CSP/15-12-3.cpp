/*
//����ⲻ��̫�ѣ���ʱ��Լ80���ӣ�����Ҫ֪���ڿ��Ե�ʱ���ҿ���һ��û��
//ԭ��ֻ���ҵ�����뵱Ȼ�Ĵ��˿ո�һ��һ��Ҫ����
//���е�һ����������xy������ο������������ʱ�䶼���˷��ڸ������
//80���ӵ��ύ��90�֣�ԭ����û�п��ǵ��������ཻʱ��+�����֣����Գ�����
//�����������Ը��ӵ�ģ�⣬һ��Ҫ����ѡ�������������������������ΪС��ʧ����0��
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
	string bis,temp;//���ֻ�ǵ����Ĺ��˶���
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