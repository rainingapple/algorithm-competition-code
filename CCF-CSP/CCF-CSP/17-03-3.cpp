////这道题遇见了一个问题导致失去了40分
////在去空格，统计#的时候注意要限定在开头，不要把后面的也去掉了
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//string line, pre;
//vector<string> v;
//int flag = 0;
////fuc函数用来处理具体行内的事务，将处理结果返回到pre中
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
//		//空行
//		if (line == "") {
//			//段落尾处理
//			if (flag == 1) {
//				v.back() = v.back() + "</p>";
//			}
//			//标题涉及到hx的问题，并且只有一行，直接在读入的时候处理好就行。
//			//无序列表尾处理
//			else if (flag == 3) {
//				v.push_back("</ul>");
//			}
//			flag = 0;
//			pre.clear();
//		}
//		else {
//			//段内格式2：标题
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
//			//段格式3：无序列表
//			else if (line[0] == '*') {
//				if (flag != 3) {
//					v.push_back("<ul>");
//				}
//				flag = 3;
//				fuc();
//			}
//			//段格式1：段落
//			else {
//				if (flag != 1) {
//					line = "<p>" + line;
//				}
//				flag = 1;
//				fuc();
//			}
//		}
//	}
//	//段落尾处理
//	if (flag == 1) {
//		v.back() = v.back() + "</p>";
//	}
//	//标题涉及到hx的问题，并且只有一行，直接在读入的时候处理好就行。
//	//无序列表尾处理
//	else if (flag == 3) {
//		v.push_back("</ul>");
//	}
//	for (int i = 0;i < v.size();i++) {
//		cout << fuc3(fuc2(v[i])) << endl;
//	}
//	return 0;
//}