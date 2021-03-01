/*#include<iostream>
using namespace std;
int main() {
	string s;
	int h, w;
	cin >> s;
	int n = s.size();
	if (n % 3 == 1) {
		h = (n + 2) / 3;
		w = (n + 2) / 3;
	}
	else if (n % 3 == 2) {
		h = (n + 1) / 3;
		w = (n + 1) / 3 + 1;
	}
	else {
		h = n / 3;
		w = n / 3 + 2;
	}
	h = h - 1;
	for (int i = 0;i < h;i++) {
		cout << s[i];
		for (int j = 0;j < w - 2;j++) {
			cout << " ";
		}
		cout << s[n - i - 1] << endl;
	}
	for (int i = h;i < h + w ;i++) {
		cout << s[i];
	}
	return 0;
}*/