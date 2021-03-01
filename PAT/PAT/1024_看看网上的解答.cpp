/*#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int max_foot;
struct bign {
	int d[1000];
	int len;
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}
};
void show_ans(bign a) {
	for (int i = a.len-1;i >= 0;i--) {
		cout << a.d[i];
	}
	cout << endl;
}
bign reverse(bign temp) {
	bign b;
	b.len = temp.len;
	for (int i = 0;i < b.len;i++) {
		b.d[i] = temp.d[b.len - 1 - i];
	}
	return b;
}
bign add(bign a) {
	bign b;
	b = reverse(a);
	bign c;
	int carry = 0;
	for (int i = 0;i < a.len;i++) {
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	if (carry != 0) {
		c.d[c.len++] = carry;
	}
	return c;
}
bool palindromic(bign num)
{
	int flag = true;
	int len = num.len;
	for (int i = len-1;i >= 0;i--) {
		if (num.d[i] != num.d[len - 1 - i]) {
			flag = false;
		}
	}
	return flag;
}
void judge(bign a, int k) {
	bool flag;
	flag = palindromic(a);
	if (flag)
	{
		show_ans(a);
		cout << k;
	}
	else
	{
		if (k < max_foot) {
			judge(add(a), k + 1);
		}
		else {
			show_ans(a);
			cout << max_foot;
		}
	}
}
int main() {
	char a[1000];
	cin >> a >> max_foot;
	int len = strlen(a);
	bign justice;
	justice.len = len;
	for (int i = 0;i < len;i++) {
		justice.d[i] = a[len - 1 - i]-'0';
	}
	judge(justice, 0);
	return 0;
}*/
