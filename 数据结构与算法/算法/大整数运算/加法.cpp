/*#include<iostream>
using namespace std;
struct bign {
	int b[1000];
	int len;
	bign() {
		memset(b, 0, sizeof(b));
		len = 0;
	}
};
bign change(char s[]) {
	bign a;
	a.len = strlen(s);
	for (int i = 0;i < a.len;i++) {
		a.b[i] = s[a.len - 1 - i]-'0';
	}
	return a;
}
bign add(bign a, bign b) {
	bign c;
	int carry = 0;
	for (int i = 0;i < a.len || i < b.len;i++) {
		int temp = a.b[i] + b.b[i]+carry;
		c.b[c.len++] = temp % 10;
		carry = temp / 10;
	}
	if (carry != 0) {
		c.b[c.len++] = carry;
	}
	return c;
}
int compare(bign a,bign b) {
	if (a.len > b.len)
		return 1;
	else if (a.len < b.len)
		return -1;
	else {
		for (int i = a.len - 1;i >= 0;i--) {
			if (a.b[i] > b.b[i]) {
				return 1;
			}
			else if (a.b[i] < b.b[i]) {
				return -1;
			}
		}
		return 0;
	}
}
void show(bign a) {
	for (int i = a.len - 1;i >= 0;i--) {
		cout << a.b[i];
	}
}
int main()
{
	char s1[1000], s2[1000];
	cin >> s1 >> s2;
	bign a, b, c;
	a = change(s1);
	b = change(s2);
	c = add(a, b);
	cout << compare(a, b);
}*/