/*#include<iostream>
#include<math.h>
using namespace std;
int a[50];
bool isPrime(int x) {
	if (x == 1)
		return false;
	int sqr = sqrt(1.0 * x);
	for (int i = 2;i <= sqr;i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}
int main()
{
	while (true) {
		int num, radix;
		bool flag;
		int mark = 0;
		cin >> num;
		if (num < 0)
			return 0;
		flag = isPrime(num);
		cin >> radix;
		while (num > 0) {
			a[mark++] = num % radix;
			num = num / radix;
		}
		int ans = 0;
		for (int i = 0;i < mark;i++) {
			ans = ans * radix + a[i];
		}
		if (flag && isPrime(ans))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}*/