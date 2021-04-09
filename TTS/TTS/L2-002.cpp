//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//int S, n, a, b, c;
//map<int, int> next_node, node_data, vis;
//vector<int> remain_part, del_part;
//int main() {
//	scanf("%d%d", &S, &n);
//	while (n--) {
//		scanf("%d%d%d", &a, &b, &c);
//		next_node[a] = c;
//		node_data[a] = b;
//	}
//	while (S != -1) {
//		if (vis[abs(node_data[S])] == 0) {
//			remain_part.push_back(S);
//			vis[abs(node_data[S])] = 1;
//		}
//		else
//			del_part.push_back(S);
//		S = next_node[S];
//	}
//	for (int i = 0;i < remain_part.size();i++) {
//		int id = remain_part[i];
//		i + 1 < remain_part.size() ? printf("%05d %d %05d\n", id, node_data[id], remain_part[i + 1]) : printf("%05d %d -1\n", id, node_data[id]);
//	}
//	for (int i = 0;i < del_part.size();i++) {
//		int id = del_part[i];
//		i + 1 < del_part.size() ? printf("%05d %d %05d\n", id, node_data[id], del_part[i + 1]) : printf("%05d %d -1\n", id, node_data[id]);
//	}
//	return 0;
//}