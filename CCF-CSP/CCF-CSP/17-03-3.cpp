////�����������һ�����⵼��ʧȥ��40��
////��ȥ�ո�ͳ��#��ʱ��ע��Ҫ�޶��ڿ�ͷ����Ҫ�Ѻ����Ҳȥ����
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//string line, pre;
//vector<string> v;
//int flag = 0;
////fuc������������������ڵ����񣬽����������ص�pre��
//void fuc() {
//	if (flag == 1) {
//		pre = line;
//	}
//	else if (flag == 3) {
//		int count = 0;
//		for (int i = 1;i < line.size();i++) {
//			if (line[i] == ' ') {
//				count++;
//			}
//			else {
//				break;
//			}
//		}
//		pre = "<li>" + line.substr(count + 1, line.size() - count - 1) + "</li>";
//	}
//	v.push_back(pre);
//}
//string fuc2(string s) {
//	int flag = 0, left, right;
//	while (true) {
//		for (int i = 0;i < s.size();i++) {
//			if (s[i] == '_') {
//				if (flag == 0) {
//					left = i;
//					flag++;
//				}
//				else if (flag == 1) {
//					right = i;
//					break;
//				}
//			}
//		}
//		if (flag != 0) {
//			s.replace(s.begin() + left, s.begin() + right + 1, "<em>" + s.substr(left + 1, right - left - 1) + "</em>");
//			flag = 0;
//		}
//		else {
//			break;
//		}
//	}
//	return s;
//}
//string fuc3(string s) {
//	while (true) {
//		bool flag = false;
//		int left1 = 0, left2 = 0, right1 = 0, right2 = 0, count1 = 0;
//		int i = 0;
//		for (;i < s.size();i++) {
//			if (s[i] == '[') {
//				flag = true;
//				left1 = i;
//			}
//			else if (s[i] == ']') {
//				right1 = i;
//				break;
//			}
//		}
//		for (;i < s.size();i++) {
//			if (s[i] == '(') {
//				left2 = i;
//			}
//			else if (s[i] == ')') {
//				right2 = i;
//				break;
//			}
//		}
//		if (flag) {
//			string url = s.substr(left2 + 1, right2 - left2 - 1);
//			string text = s.substr(left1 + 1, right1 - left1 - 1);
//			s.replace(left1, right2 + 1 - left1, "<a href=\"" + url + "\">" + text + "</a>");
//		}
//		else {
//			break;
//		}
//	}
//	return s;
//}
//int main() {
//	while (getline(cin, line)) {
//		//����
//		if (line == "") {
//			//����β����
//			if (flag == 1) {
//				v.back() = v.back() + "</p>";
//			}
//			//�����漰��hx�����⣬����ֻ��һ�У�ֱ���ڶ����ʱ����þ��С�
//			//�����б�β����
//			else if (flag == 3) {
//				v.push_back("</ul>");
//			}
//			flag = 0;
//			pre.clear();
//		}
//		else {
//			//���ڸ�ʽ2������
//			if (line[0] == '#') {
//				int count = 0;
//				int count2 = 0;
//				int i = 0;
//				for (;i < line.size();i++) {
//					if (line[i] == '#')
//						count++;
//					else
//						break;
//				}
//				for (;i < line.size();i++) {
//					if (line[i] == ' ') {
//						count2++;
//					}
//					else {
//						break;
//					}
//				}
//				string temp = "<h" + to_string(count) + ">" + line.substr(count + count2, line.size() - count - count2) + "</h" + to_string(count) + ">";
//				v.push_back(temp);
//				flag = 2;
//			}
//			//�θ�ʽ3�������б�
//			else if (line[0] == '*') {
//				if (flag != 3) {
//					v.push_back("<ul>");
//				}
//				flag = 3;
//				fuc();
//			}
//			//�θ�ʽ1������
//			else {
//				if (flag != 1) {
//					line = "<p>" + line;
//				}
//				flag = 1;
//				fuc();
//			}
//		}
//	}
//	//����β����
//	if (flag == 1) {
//		v.back() = v.back() + "</p>";
//	}
//	//�����漰��hx�����⣬����ֻ��һ�У�ֱ���ڶ����ʱ����þ��С�
//	//�����б�β����
//	else if (flag == 3) {
//		v.push_back("</ul>");
//	}
//	for (int i = 0;i < v.size();i++) {
//		cout << fuc3(fuc2(v[i])) << endl;
//	}
//	return 0;
//}