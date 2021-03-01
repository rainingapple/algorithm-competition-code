//#include<iostream>
//#include<map>
//#include<vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	map<string, vector<int>> m;
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0;i < k;i++) {
//		int index, total;
//		cin >> index >> total;
//		for (int j = 0;j < total;j++) {
//			string temp;
//			cin >> temp;
//			m[temp].push_back(index);
//		}
//	}
//	vector<string> v;
//	for (int i = 0;i < n;i++) {
//		string temp;
//		cin >> temp;
//		v.push_back(temp);
//	}
//	for (int i = 0;i < n;i++) {
//		string temp = v[i];
//		cout << temp << " ";
//		if (!m[temp].empty())
//		{
//			sort(m[temp].begin(), m[temp].end());
//			cout << m[temp].size() << " ";
//			for (int j = 0;j < m[temp].size();j++) {
//				cout << m[temp][j];
//				if (j != m[temp].size() - 1) {
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}
//		else {
//			cout << 0 << endl;
//		}
//	}
//	return 0;
//}