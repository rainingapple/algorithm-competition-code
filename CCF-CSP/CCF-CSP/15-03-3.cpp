/*#include<iostream>
using namespace std;
//用时一个半小时，没什么问题，就是提交的时候注意一下格式
//同时在计算具体月的天数的时候，可以用数组，只是用一个函数外皮，处理一下闰年情况就行了。
bool fuc1(int y)//判断是不是闰年
{
	bool a;
	a = (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
	return a;
}
int y_f_d(int y)//计算y年之前有多少天，1850.1.1计算了
{
	int sum=0;
	for (int i = 1850;i < y;i++)
	{
		if (fuc1(i))
			sum += 366;
		else
			sum += 365;
	}
	return sum;
}
int m_f_d(int y,int a)//计算本年本月之前有多少天
{
	int sum=0;
	for (int i = 1;i < a;i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			sum += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else if (fuc1(y) && i == 2)
			sum += 29;
		else
			sum += 28;
	}
	return sum;
}
int j_f_m(int y,int a)//求本月开始时是星期几
{
	int w;
	w = (y_f_d(y) + m_f_d(y, a) + 2) % 7;
	return w;
}
int m_d(int y, int i)//返回某一年一个月的天数
{
	int sum;
	if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		sum = 31;
	else if (i == 4 || i == 6 || i == 9 || i == 11)
		sum = 30;
	else if (fuc1(y) && i == 2)
		sum = 29;
	else
		sum = 28;
	return sum;
}
bool j_r(int y,int a,int b,int c)//判断某月第几个星期几到底存不存在
{
	bool flag=true;
	int max = m_d(y, a);
	int count = ((c-j_f_m(y,a)+7)%7)+(b-1)*7+1;
	if (count > max)
		flag = false;
	return flag;
}
void calcu(int y, int a, int b, int c)
{
	int c2 = j_f_m(y, a);
	int fin;
	if (!j_r(y, a, b, c))
		cout << "none"<<endl;
	else
	{
		int count = ((c - j_f_m(y, a) + 7) % 7) + (b - 1) * 7 +1;
		fin = count;
		cout << y << "/";
		if (a < 10)
			cout << 0 << a << "/";
		else
			cout << a << "/";
		if (fin < 10)
			cout << 0 << fin;
		else
			cout << fin;
		cout << endl;
	}
}
int main()
{
	int y1, y2, a, b, c;
	cin >> a >> b >> c >> y1 >> y2;
	for (int i = y1;i <= y2;i++)
		calcu(i, a, b, c);
	return 0;
}*/