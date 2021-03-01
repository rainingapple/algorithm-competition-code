#include<iostream>
using namespace std;
struct bign {
	int d[1000];
	int len;
	bign() {
		memset(d, 0, sizeof(d));
		len = 0;
	}
};
bign change(char s[]) {
	bign a;
	a.len = strlen(s);
	for (int i = 0;i < a.len;i++) {
		a.d[i] = s[a.len - 1 - i] - '0';
	}
	return a;
}
int compare(bign a, bign b) {
	if (a.len > b.len)
		return 1;
	else if (a.len < b.len)
		return -1;
	else {
		for (int i = a.len - 1;i >= 0;i--) {
			if (a.d[i] > b.d[i]) {
				return 1;
			}
			else if (a.d[i] < b.d[i]) {
				return -1;
			}
		}
		return 0;
	}
}
bign sub(bign a, bign b) {
	bign c;
	for (int i = 0;i < a.len || i < b.len;i++) {
		if (a.d[i] < b.d[i] && a.d[i+1] > 0) {
			a.d[i + 1]--;
			a.d[i] += 10;
		}
		c.d[c.len++] = a.d[i] - b.d[i];
	}
	while (c.len >= 2 && c.d[c.len - 1] == 0) {
		c.len--;
	}
	return c;
}
void show(bign a) {
	for (int i = a.len - 1;i >= 0;i--) {
		cout << a.d[i];
	}
}
int main()
{
	char s1[1000], s2[1000];
	cin >> s1 >> s2;
	bign a, b, c;
	a = change(s1);
	b = change(s2);
	/*if (compare(a, b) == -1) {
		cout << "-";
		swap(a, b);
	}*/
	c = sub(a, b);
	show(c);
}