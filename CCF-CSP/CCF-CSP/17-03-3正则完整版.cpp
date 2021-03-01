////这道题遇见了一个问题导致失去了40分
////在去空格，统计#的时候注意要限定在开头，不要把后面的也去掉了
//#include<iostream>
//#include<string>
//#include<vector>
//#include<regex>
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
//				smatch result;
//				regex r3("(#*)\\s*(.*)");
//				regex_search(line.cbegin(), line.cend(), result, r3);
//				string temp = "<h" + to_string(result.length(1)) + ">" + result.str(2) + "</h" + to_string(result.length(1)) + ">";
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
//	regex r1("_(.*?)_");
//	regex r2("\\[(.*?)\\]\\((.*?)\\)");
//	for (int i = 0;i < v.size();i++) {
//		string s2 = regex_replace(v[i], r1, "<em>$1</em>");
//		cout << regex_replace(s2, r2, "<a href=\"$2\">$1</a>") << endl;
//	}
//	return 0;
//}