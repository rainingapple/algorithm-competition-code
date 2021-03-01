/*#include<iostream>
using namespace std;
bool isPrime(int num) {
	if (num <= 1)
		return false;
	bool flag = true;
	int sqr = int(sqrt(1.0 * num));
	for (int i = 2;i <= sqr;i++) {
		if (num % i == 0) {
			flag = false;
		}
	}
	return flag;
}
int main()
{
	for (int i = 3;i < 100;i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}
	}
}*/