////这是vector全局写的
//#include<iostream>
//#include<vector>
//#include <queue>
//#include <stack>
//#include <set>
//#include<algorithm>
//using namespace std;
//struct node {
//	int weight;
//	vector<int> child;
//};
//const int Maxsize = 105;
//node node_list[Maxsize];
//vector<int> temp_path;
//int n, m, s;
//bool cmp(int a, int b)
//{
//	return node_list[a].weight > node_list[b].weight;
//}
//void ans_out(vector<int> list)
//{
//		for (int i = 0;i < list.size();i++)
//		{
//			cout << node_list[list[i]].weight;
//			if (i != list.size() - 1)
//				cout << " ";
//		}
//		cout << endl;
//}
//void search_path(int no,int sum)
//{
//	sum += node_list[no].weight;
//	if (node_list[no].child.size()==0&&sum==s)
//	{
//		ans_out(temp_path);
//	}
//	else
//	{
//		for (int i = 0;i < node_list[no].child.size();i++)
//		{
//			temp_path.push_back(node_list[no].child[i]);
//			search_path(node_list[no].child[i],sum);
//			temp_path.pop_back();
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m >> s;
//	for (int i = 0;i < n;i++)
//	{
//		cin >> node_list[i].weight;
//		node_list[i].child.clear();
//	}
//	for (int i = 0;i < m;i++)
//	{
//		int root;
//		cin >> root;
//		int total;
//		cin >> total;
//		for (int j = 0;j < total;j++)
//		{
//			int temp;
//			cin >> temp;
//			node_list[root].child.push_back(temp);
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		sort(node_list[i].child.begin(), node_list[i].child.end(), cmp);
//	}
//	temp_path.push_back(0);
//	search_path(0,0);
//	return 0;
//}