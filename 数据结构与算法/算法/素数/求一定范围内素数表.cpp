//注意一下，2是素数，1什么都不是
#include<iostream>
using namespace std;
bool p[101];
int prime[101];
int pnum = 0;
void find_Prime(int n) {
	fill(p, p + 101, true);
	for (int i = 2;i <= n;i++) {
		if (p[i] == true) {
			prime[pnum++] = i;
			for (int j = 2 * i;j <= n;j += i) {
				p[j] = false;
			}
		}
	}
}
int main() {
	find_Prime(100);
	for (int i = 0;i < pnum;i++) {
		cout << prime[i] << endl;
	}
	return 0;
}