////�����������һ�����⵼��ʧȥ��40��
////��ȥ�ո�ͳ��#��ʱ��ע��Ҫ�޶��ڿ�ͷ����Ҫ�Ѻ����Ҳȥ����
//#include<iostream>
//#include<string>
//#include<vector>
//#include<regex>
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
//				smatch result;
//				regex r3("(#*)\\s*(.*)");
//				regex_search(line.cbegin(), line.cend(), result, r3);
//				string temp = "<h" + to_string(result.length(1)) + ">" + result.str(2) + "</h" + to_string(result.length(1)) + ">";
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
//	regex r1("_(.*?)_");
//	regex r2("\\[(.*?)\\]\\((.*?)\\)");
//	for (int i = 0;i < v.size();i++) {
//		string s2 = regex_replace(v[i], r1, "<em>$1</em>");
//		cout << regex_replace(s2, r2, "<a href=\"$2\">$1</a>") << endl;
//	}
//	return 0;
//}