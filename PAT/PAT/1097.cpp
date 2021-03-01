//#pragma warning(disable:4996)
//#include<iostream>
//#include<map>
//using namespace std;
//struct node {
//	int value;
//	int next;
//};
//struct sim_node {
//	int value;
//	int address;
//};
//node d[100005];
//sim_node ans1[100005];
//sim_node ans2[100005];
//map<int, int> m;
//int head, n;
//int main() {
//	cin >> head >> n;
//	for (int i = 0;i < n;i++) {
//		int address;
//		scanf("%d", &address);
//		scanf("%d%d", &d[address].value, &d[address].next);
//	}
//	int temp = head;
//	int mark1 = 0;
//	int mark2 = 0;
//	while (temp != -1) {
//		if (m[abs(d[temp].value)] == 0) {
//			ans1[mark1].address = temp;
//			ans1[mark1++].value = d[temp].value;
//			m[abs(d[temp].value)]++;
//			temp = d[temp].next;
//		}
//		else {
//			ans2[mark2].address = temp;
//			ans2[mark2++].value = d[temp].value;
//			temp = d[temp].next;
//		}
//	}
//	for (int i = 0;i < mark1;i++) {
//		printf("%05d %d", ans1[i].address, ans1[i].value);
//		if (i != mark1 - 1) {
//			printf(" %05d\n", ans1[i + 1].address);
//		}
//		else {
//			printf(" -1\n");
//		}
//	}
//	for (int i = 0;i < mark2;i++) {
//		printf("%05d %d", ans2[i].address, ans2[i].value);
//		if (i != mark2 - 1) {
//			printf(" %05d\n", ans2[i + 1].address);
//		}
//		else {
//			printf(" -1\n");
//		}
//	}
//	return 0;
//}