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
//bign div(bign a, int b, int& r) {
//	bign c;
//	c.len = a.len;
//	for (int i = a.len - 1;i >= 0;i--) {
//		int temp = r * 10 + a.d[i];
//		if (temp < b) {
//			c.d[i] = 0;
//			r = temp;
//		}
//		else {
//			c.d[i] = temp / b;
//			r = temp % b;
//		}
//	}
//	while (c.len >= 2 && c.d[c.len - 1] == 0) {
//		c.len--;
//	}
//	return c;
//}
//bign div2(bign a, int b, int& r) {
//	bign c;
//	c.len = a.len;
//	for (int i = c.len - 1;i >= 0;i++) {
//		int temp = r * 10 + a.d[i];
//		if (temp < b) {
//			c.d[i] = 0;
//			r = temp;
//		}
//		else {
//			c.d[i] = temp / b;
//			r = temp % b;
//		}
//	}
//	while (c.len >= 2 && c.d[c.len - 1] == 0) {
//		c.len--;
//	}
//}
//void show(bign a) {
//	for (int i = a.len - 1;i >= 0;i--) {
//		cout << a.d[i];
//	}
//}
//int main()
//{
//	char s1[1000];
//	int m, r = 0;
//	cin >> s1 >> m;
//	bign a, b, c;
//	a = change(s1);
//	c = div(a, m, r);
//	show(c);
//	cout << endl;
//	cout << r;
//}