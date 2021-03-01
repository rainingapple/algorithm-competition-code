/*#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i < n - 1;i++)
	{
		if ((a[i - 1] > a[i] && a[i] < a[i + 1])||(a[i - 1] < a[i] && a[i] > a[i + 1]))
			sum++;
	}
	cout << sum;
	return 0;
}*/