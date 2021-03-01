//#include<iostream>
//using namespace std;
//int* A = new int[60];
//int* B = new int[60];
//int order[60];
//string temp[4] = { "S","H","C","D" };
//void fuc(int x) {
//	if (x <= 52) {
//		cout << temp[(x-1) / 13];
//		if (x % 13 != 0)
//			cout << x % 13;
//		else
//			cout << 13;
//	}
//	else if (x == 53) {
//		cout << "J1";
//	}
//	else {
//		cout << "J2";
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1;i <= 54;i++) {
//		A[i] = i;
//	}
//	for (int i = 1;i <= 54;i++) {
//		cin >> order[i];
//	}
//	for (int k = 0;k < n;k++) {
//		for (int i = 1;i <= 54;i++) {
//			B[order[i]] = A[i];
//		}
//		swap(A, B);
//	}
//	for (int i = 1;i <= 54;i++) {
//		fuc(A[i]);
//		if (i != 54)
//			cout << " ";
//	}
//	return 0;
//}
