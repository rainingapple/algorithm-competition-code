/*#include<iostream>
#include<list>
#include<iomanip>
using namespace std;
int main()
{
	list<pair<double, double>> a1;
	list<pair<double, double>> a2;
	list<pair<double, double>> ans;
	int n1, n2;
	bool flag = false;
	cin >> n1;
	for (int i = 0;i < n1;i++)
	{
		double temp1, temp2;
		cin >> temp1 >> temp2;
		a1.push_back(make_pair(temp1, temp2));
	}
	cin >> n2;
	for (int i = 0;i < n2;i++)
	{
		double temp1, temp2;
		cin >> temp1 >> temp2;
		a2.push_back(make_pair(temp1, temp2));
	}
	while (!a1.empty() && !a2.empty())
	{
		double e1, c1, e2, c2;
		pair<double, double> p1 = a1.front();
		pair<double, double> p2 = a2.front();
		e1 = p1.first;
		c1 = p1.second;
		e2 = p2.first;
		c2 = p2.second;
		if (e1 == e2)
		{
			if (c1 + c2 != 0)
			{
				ans.push_back(make_pair(e1, c1 + c2));
				flag = true;
			}
			a1.pop_front();
			a2.pop_front();
		}
		else if (e1 > e2)
		{
			if (c1 != 0)
				ans.push_back(make_pair(e1, c1));
			a1.pop_front();
		}
		else
		{
			if (c2 != 0)
				ans.push_back(make_pair(e2, c2));
			a2.pop_front();
		}
	}
	while (!a1.empty())
	{
		double e1, c1;
		pair<double, double> p1 = a1.front();
		e1 = p1.first;
		c1 = p1.second;
		if (c1 != 0)
			ans.push_back(make_pair(e1, c1));
		a1.pop_front();
	}
	while (!a2.empty())
	{
		double e1, c1;
		pair<double, double> p1 = a2.front();
		e1 = p1.first;
		c1 = p1.second;
		if (c1 != 0)
			ans.push_back(make_pair(e1, c1));
		a2.pop_front();
	}
	if (ans.size() == 0)
	{
		cout << 0;
		return 0;
	}
	cout << ans.size();
	for (auto i = ans.begin();i != ans.end();i++)
	{
		printf(" %.0f %.1f", i->first,i->second);
	}
	return 0;
}*/