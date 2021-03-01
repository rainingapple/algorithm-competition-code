/*#include<iostream>
using namespace std;
struct node
{
	int e;
	double c;
};
node a[15];
double ans[2050];
int main()
{
	fill(ans, ans + 2050, 0);
	int sum1,sum2;
	cin >> sum1;
	for (int i = 0;i < sum1;i++)
	{
		int e;
		double c;
		cin >> e >> c;
		a[i].c = c;
		a[i].e = e;
	}
	cin >> sum2;
	for (int i = 0;i < sum2;i++)
	{
		int e1;
		double c1;
		cin >> e1 >> c1;
		for (int j = 0;j < sum1;j++)
		{
			int e_temp;
			double c_temp;
			e_temp = e1 + a[j].e;
			c_temp = c1 * a[j].c;
			ans[e_temp] += c_temp;
		}
	}
	int total = 0;
	for (int i = 0;i < 2050;i++)
	{
		if (ans[i] != 0)
			total++;
	}
	cout << total;
	for (int i = 2049;i >= 0;i--)
	{
		if (ans[i] != 0)
		{
			printf(" %d %.1f", i, ans[i]);
		}
	}
	return 0;
}*/