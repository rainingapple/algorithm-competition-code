////�����������ֻ��ͳ��һ��ֵ���Ǿ�û�б�Ҫ����Ҫ����һ��set��ͳ��
////��������set��findҪ��insert��ܶ�
////������ȡinsert�ύʮ��ż�����Զ�һ�Ρ������棡
//#include<iostream>
//#include<set>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//int n, m, k, a, b;
//vector<set<int>> vv;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &m);
//		set<int> v;
//		for (int j = 0;j < m;j++) {
//			int temp;
//			scanf("%d", &temp);
//			v.insert(temp);
//		}
//		vv.push_back(v);
//	}
//	scanf("%d", &k);
//	for (int i = 0;i < k;i++) {
//		scanf("%d%d", &a, &b);
//		int com = 0, dif = vv[a - 1].size();
//		for (auto it = vv[b - 1].begin();it != vv[b - 1].end();it++) {
//			if (vv[a - 1].find(*it) != vv[a - 1].end())
//				com++;
//			else
//				dif++;
//		}
//		printf("%.2lf%%\n", com * 100.0 / dif);
//	}
//	return 0;
//}