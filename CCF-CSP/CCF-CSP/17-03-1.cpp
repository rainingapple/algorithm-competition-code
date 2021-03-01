/*#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int count = 0;
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		int temp;
		cin >> temp;
		sum += temp;
		if (sum >= k)
		{
			count++;
			sum = 0;
		}
	}
	if (sum > 0)
		count++;
	cout << count;
	return 0;
}*/