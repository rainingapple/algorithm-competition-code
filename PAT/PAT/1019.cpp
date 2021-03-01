/*#include<iostream>
using namespace std;
int a[50];
int change(int num, int base) {
	int mark = 0;
	while (num != 0) {
		a[mark++] = num % base;
		num = num / base;
	}
	return mark;
}
bool judge(int mark)
{
	bool flag = true;
	for (int i = 0;i <= mark / 2;i++) {
		if (a[i] != a[mark - i - 1]) {
			flag = false;
			return flag;
		}
	}
	return flag;
}
int main()
{
	int num, b;
	cin >> num >> b;
	int mark=change(num, b);
	if (judge(mark)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	for (int i = mark - 1;i >= 1;i--) {
		cout << a[i] << " ";
	}
	cout << a[0];
	return 0;
}*/