//#include<iostream>
//#include<vector>
//#include<sstream>
//#include<algorithm>
//using namespace std;
//struct record {
//	int layer;
//	string id;
//	string property;
//};
//vector<string> p_list;
//vector<int> ans;
//record a[105];
//string temp, s;
//int n, m, p_num;
////ȥ���ַ���ǰ��..��ͬʱͳ�����Ǽ��������� 
//string fuc1(string s, int& layer) {
//	while (s[layer] == '.')
//		layer++;
//	s = s.substr(layer, s.size() - layer);
//	layer /= 2;
//	return s;
//}
////����Ҫƥ����ַ�����¼�뵽һ��vector���� 
//int fuc2(string temp) {
//	stringstream ss(temp);
//	while (ss >> temp) {
//		p_list.push_back(temp);
//	}
//	return p_list.size();
//}
//bool com_str(string s1, string s2) {
//	if (s1.size() != s2.size()) {
//		return false;
//	}
//	for (int i = 0;i < s1.size();i++) {
//		if ((s1[i] - s2[i] != 0) && (s1[i] - s2[i] != 32) && (s1[i] - s2[i] != -32)) {
//			return false;
//		}
//	}
//	return true;
//}
//bool check(string s, int no, int end) {
//	//cout<<s<<" "<<no<<" "<<end<<endl;
//	int n_layer = a[end].layer;
//	for (int i = end - 1;i >= 0;i--) {
//		if (no != p_num - 1 && n_layer < a[i].layer)
//			return false;
//		n_layer = a[i].layer;
//		if ((s[0] == '#' && s == a[i].property) || (s[0] != '#' && com_str(s, a[i].id))) {
//			if (no == 0) {
//				if (no == p_num - 1) {
//					ans.push_back(i + 1);
//				}
//				else
//					return true;
//			}
//			else {
//				if (check(p_list[no - 1], no - 1, i)) {
//					if (no == p_num - 1) {
//						ans.push_back(i + 1);
//					}
//					else
//						return true;
//				}
//				else
//					return false;
//			}
//		}
//	}
//	return false;
//}
//int main() {
//	cin >> n >> m;
//	getline(cin, temp);
//	//�������룬��������id�����Է��벢������������ 
//	for (int i = 0;i < n;i++) {
//		int index, layer = 0;
//		getline(cin, temp);
//		s = fuc1(temp, layer);
//		index = s.find(' ');
//		if (index != string::npos) {
//			a[i].id = s.substr(0, index);
//			a[i].property = s.substr(index + 1, s.size() - index - 1);
//		}
//		else {
//			a[i].id = s;
//			a[i].property = "";
//		}
//		a[i].layer = layer;
//	}
//	a[n].layer = 10000;
//	//����ָ��Ƿ���ȷ 
//	/*for(int i=0;i<n;i++){
//		cout<<a[i].id<<" "<<a[i].property<<" "<<a[i].layer<<endl;
//	}*/
//	//�������룬����󽻸�check�ݹ鴦��; 
//	for (int i = 0;i < m;i++) {
//		getline(cin, temp);
//		p_num = fuc2(temp);
//		check(p_list[p_num - 1], p_num - 1, n);
//		sort(ans.begin(), ans.end());
//		cout << ans.size();
//		for (int i = 0;i < ans.size();i++) {
//			cout << " " << ans[i];
//		}
//		p_list.clear();
//		ans.clear();
//		cout << endl;
//	}
//	return 0;
//}