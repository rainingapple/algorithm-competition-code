/*#include<iostream>
using namespace std;
int n, w_max;
int maxV = 0;
int w[100];
int v[100];
//这个是不进行剪枝的
//void DFS(int count,int sumV,int sumW) {
//	if (count == n) {
//		if (sumW <= w_max && sumV > maxV) {
//			maxV = sumV;
//		}
//		return;
//	}
//	DFS(count + 1, sumV, sumW);
//	DFS(count + 1, sumV + v[count], sumW + w[count]);
//}

//这个是进行剪枝的
void DFS(int count, int sumV, int sumW) {
	if (count == n) {
		return;
	}
	DFS(count + 1, sumV, sumW);
	if (sumW + w[count] <= w_max) {
		if (sumV + v[count] > maxV)
			maxV = sumV + v[count];
		DFS(count + 1, sumV + v[count], sumW + w[count]);
	}
}
int main() {
	cin >> n >> w_max;
	for (int i = 0;i < n;i++) {
		cin >> w[i];
	}
	for (int i = 0;i < n;i++) {
		cin >> v[i];
	}
	DFS(0, 0, 0);
	cout << maxV;
	return 0;
}*/