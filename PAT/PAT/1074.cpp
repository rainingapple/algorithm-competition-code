//#include<iostream>
//#include <map>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M;
//string firstadd;
//string add, ntadd;
//int dta;
//int pos = 0;
//map<string, string> nextadd;
//map<string, int> value;
//vector<string> v;
//void reverse(int begin, int end) {
//	while (begin <= end) {
//		string temp = v[begin];
//		v[begin] = v[end];
//		v[end] = temp;
//		begin++;
//		end--;
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> firstadd >> N >> M;
//	while (N--) {
//		cin >> add >> dta >> ntadd;
//		nextadd[add] = ntadd;
//		value[add] = dta;
//	}
//	v.push_back(firstadd);
//	while (nextadd[v[pos]] != "-1") {
//		v.push_back(nextadd[v[pos]]);
//		pos++;
//	}
//	for (int i = 0;i <= v.size() - M;i = i + M) {
//		reverse(i, i + M-1);
//	}
//	for (int i = 0;i < v.size()-1;i++) {
//		cout << v[i] << " " << value[v[i]] << " " << v[i+1] << endl;
//	}
//	cout << v.back() << " " << value[v.back()] << " " << -1;
//	return 0;
//}