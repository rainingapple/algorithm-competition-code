/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	n = n - 3500;
	int salary;
	if (n <= 0)
	{
		salary= n + 3500;
	}
	else if (n <= 1455)
	{
		salary = 3500 + n / 0.97;
	}
	else if (n <= 4155)
	{
		salary = 5000 + (n - 1455) / 0.9;
	}
	else if (n <= 7755)
	{
		salary = 8000 + (n - 4155) /0.8;
	}
	else if (n <= 27255)
	{
		salary = 12500 + (n - 7755) / 0.75;
	}
	else if (n <= 41255)
	{
		salary = 38500 + (n - 27255) / 0.7;
	}
	else if (n <= 57505)
	{
		salary = 58500 + (n - 41255) / 0.65;
	}
	else
	{
		salary = 83500 + (n - 57505) / 0.55;
	}
	cout << salary<<endl;
	return 0;
}*/

/*#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
	double ti;
	cin >> ti;
	// s为税前工资、rate为纳税比率、t为税后工资
	array<double, 9> s{ 0, 3500, 5000, 8000, 12500, 38500, 58500, 83500, INT_MAX };
	array<double,9> rate{ 0.0, 0.0, 0.03, 0.1, 0.2, 0.25, 0.3, 0.35, 0.45 }, t{};
	for (int i = 1; i < 9; ++i)  //计算各节点处税后工资
	{
		t[i] = t[i - 1] + (s[i] - s[i - 1]) * (1 - rate[i]);
	}
	auto i = find_if(t.begin(), t.end(), [ti](double a) {return ti >= a;})-t.begin();
	int salary = s[i - 1] + (ti - t[i - 1]) / (1 - rate[i]);
	cout << salary;
	return 0;
}*/
