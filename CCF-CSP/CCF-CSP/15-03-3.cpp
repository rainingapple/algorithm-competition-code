/*#include<iostream>
using namespace std;
//��ʱһ����Сʱ��ûʲô���⣬�����ύ��ʱ��ע��һ�¸�ʽ
//ͬʱ�ڼ�������µ�������ʱ�򣬿��������飬ֻ����һ��������Ƥ������һ��������������ˡ�
bool fuc1(int y)//�ж��ǲ�������
{
	bool a;
	a = (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
	return a;
}
int y_f_d(int y)//����y��֮ǰ�ж����죬1850.1.1������
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
int m_f_d(int y,int a)//���㱾�걾��֮ǰ�ж�����
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
int j_f_m(int y,int a)//���¿�ʼʱ�����ڼ�
{
	int w;
	w = (y_f_d(y) + m_f_d(y, a) + 2) % 7;
	return w;
}
int m_d(int y, int i)//����ĳһ��һ���µ�����
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
bool j_r(int y,int a,int b,int c)//�ж�ĳ�µڼ������ڼ����״治����
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