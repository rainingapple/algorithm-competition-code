////起初我以为是题目不严谨导致可能出现最后一个测试点的情况
////但是后来我发现姥姥说的是head是-1，而不是n=0，这样就会成为最后是0
//#pragma warning (disable:4996)
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int value;
//	int next;
//};
//int mark = 0;
//node a[100005];
//node b[100005];
//bool cmp(node n1, node n2) {
//	return n1.value < n2.value;
//}
//void fuc(int head) {
//	while (head != -1) {
//		b[mark].next = head;
//		b[mark++].value = a[head].value;
//		head = a[head].next;
//	}
//}
//int main() {
//	int n, head;
//	scanf("%d%d", &n, &head);
//	for (int i = 0;i < n;i++) {
//		int ads, key, next;
//		scanf("%d", &ads);
//		scanf("%d%d", &a[ads].value, &a[ads].next);
//	}
//	fuc(head);
//	sort(b, b + mark, cmp);
//	if (mark == 0) {
//		cout << 0 << " " << -1;
//		return 0;
//	}
//	printf("%d %05d\n", mark, b[0].next);
//	for (int i = 0;i < mark;i++) {
//		if (i == mark - 1) {
//			printf("%05d %d -1\n", b[i].next, b[i].value);
//			return 0;
//		}
//		printf("%05d %d %05d\n", b[i].next, b[i].value, b[i + 1].next);
//	}
//	return 0;
//}