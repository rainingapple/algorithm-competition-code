////Zero is written 0 and is also palindromic by definition.
////17:37 18
////17:40 20
//#include<iostream>
//using namespace std;
//struct bign {
//	int d[2000];
//	int len;
//	bign() :len(0) {}
//};
//int compare(bign b1, bign b2) {
//	if (b1.len > b2.len) {
//		return 1;
//	}
//	else if (b1.len < b2.len) {
//		return -1;
//	}
//	else {
//		for (int i = b1.len - 1;i >= 0;i--) {
//			if (b1.d[i] > b2.d[i])
//				return 1;
//			else if (b1.d[i] < b2.d[i]) {
//				return -1;
//			}
//		}
//		return 0;
//	}
//}
//bign sub(bign b1, bign b2) {
//	bign ans;
//	for (int i = 0;i < b1.len || i < b2.len;i++) {
//		if (b1.d[i] < b2.d[i]) {
//			b1.d[i + 1]--;
//			b1.d[i] += 10;
//		}
//		ans.d[ans.len++] = b1.d[i] - b2.d[i];
//	}
//	while (ans.len > 1 && ans.d[ans.len - 1] == 0) {
//		ans.len--;
//	}
//}
//bign multi(bign b1, int b) {
//	bign c;
//	int carry = 0;
//	for (int i = 0;i < b1.len;i++) {
//		int temp = carry + b1.d[i] * b;
//		c.d[c.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	while (carry != 0) {
//		c.d[c.len++] = carry % 10;
//		carry = carry / 10;
//	}
//}
//bign div(bign b1, int b ,int &r) {
//	bign c;
//	c.len = b1.len;
//	for (int i = c.len - 1;i >= 0;i--) {
//		int r = r * 10 + b1.d[i];
//		if (r > b) {
//			c.d[i] = r / b;
//			r = r % b;
//		}
//	}
//	while (c.len > 1 && c.d[c.len - 1] == 0) {
//		c.len--;
//	}
//}
//void show(bign b) {
//	for (int i = b.len - 1;i >= 0;i--) {
//		cout << b.d[i];
//	}
//}
//bool ispalin(bign b) {
//	for (int i = 0;i < b.len/2;i++) {
//		if (b.d[i] != b.d[b.len - 1 - i]) {
//			return false;
//		}
//	}
//	return true;
//}
//bign rever(bign a) {
//	bign b;
//	b.len = a.len;
//	for (int i = 0;i < a.len;i++) {
//		b.d[i] = a.d[a.len - 1 - i];
//	}
//	return b;
//}
//bign change(string s) {
//	bign b;
//	for (int i = s.size() - 1;i >= 0;i--) {
//		b.d[b.len++] = s[i] - '0';
//	}
//	return b;
//}
//bign add(bign b1, bign b2) {
//	bign ans;
//	int carry = 0;
//	for (int i = 0;i < b1.len || i < b2.len;i++) {
//		int temp = carry + b1.d[i] + b2.d[i];
//		ans.d[ans.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	if (carry != 0) {
//		ans.d[ans.len++] = carry;
//	}
//	return ans;
//}
//int main() {
//	string s1;
//	cin >> s1;
//	int mark = 0;
//	bign a = change(s1);
//	/*while (!ispalin(a) && mark < 10) {
//		mark++;
//		bign b = rever(a);
//		show(a);
//		printf(" + ");
//		show(b);
//		printf(" = ");
//		a = add(a, b);
//		show(a);
//		printf("\n");
//	}
//	if (mark == 10) {
//		printf("Not found in 10 iterations.");
//	}
//	else {
//		show(a);
//		printf(" is a palindromic number.");
//	}*/
//	return 0;
//}