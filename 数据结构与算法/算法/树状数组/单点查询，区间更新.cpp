#include<iostream>
#include<string.h>
#include<algorithm>
#define lowbit(i) ((i)&(-i))
using namespace std;
const int maxn = 10005;
int n;
int c[maxn];
int a[maxn];
int getsum(int x) {
	int sum = 0;
	for (int i = x;i < maxn;i += lowbit(i)) {
		sum += c[i];
	}
	return sum;
}
void update(int x, int v) {
	for (int i = x;i > 0;i -= lowbit(i)) {
		c[i] += v;
	}
}