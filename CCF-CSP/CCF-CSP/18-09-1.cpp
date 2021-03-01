//#include<iostream>
//using namespace std;
//int A[1005];
//int B[1005];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> A[i];
//	}
//	B[0] = (A[0] + A[1]) / 2;
//	B[n - 1] = (A[n - 2] + A[n - 1]) / 2;
//	for (int i = 1;i < n - 1;i++) {
//		B[i] = (A[i - 1] + A[i] + A[i + 1]) / 3;
//	}
//	for (int i = 0;i < n;i++) {
//		cout << B[i] << " ";
//	}
//	return 0;
//}