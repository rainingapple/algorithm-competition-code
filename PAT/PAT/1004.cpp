//注意是01为根
/*#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
struct node {
	int level;
	vector<int> child;
};
int level_count[105] = { 0 };
node node_list[105];
int max_level = 1;
void BFS(int no,int level) {
	max_level = max(max_level, level);
	if (node_list[no].child.empty())
	{
		level_count[level]++;
	}
	else {
		for (int i = 0;i < node_list[no].child.size();i++) {
			BFS(node_list[no].child[i], level + 1);
		}
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		int temp;
		cin >> temp;
		int total;
		cin >> total;
		for (int j = 0;j < total;j++) {
			int child;
			cin >> child;
			node_list[temp].child.push_back(child);
		}
	}
	BFS(1, 1);
	for (int i = 1;i < max_level;i++) {
		cout << level_count[i] << " ";
	}
	cout << level_count[max_level];
}*/