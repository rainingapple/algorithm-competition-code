//#include<iostream>
//using namespace std;
//struct bign {
//	int d[1000];
//	int len;
//	bign() {
//		memset(d, 0, sizeof(d));
//		len = 0;
//	}
//};
//bign change(char s[]) {
//	bign a;
//	a.len = strlen(s);
//	for (int i = 0;i < a.len;i++) {
//		a.d[i] = s[a.len - 1 - i] - '0';
//	}
//	return a;
//}
//bign multi(bign a, int b) {
//	bign c;
//	int carry = 0;
//	for (int i = 0;i < a.len;i++) {
//		int temp = carry + a.d[i] * b;
//		c.d[c.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	while (carry != 0) {
//		c.d[c.len++] = carry % 10;
//		carry = carry / 10;
//	}
//	return c;
//}
//void show(bign a) {
//	for (int i = a.len - 1;i >= 0;i--) {
//		cout << a.d[i];
//	}
//}
//int main()
//{
//	char s1[1000];
//	int m;
//	cin >> s1 >> m;
//	bign a, b, c;
//	a = change(s1);
//	c = multi(a, m);
//	show(c);
//}