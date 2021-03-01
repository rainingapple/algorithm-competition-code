////考察嵌套分割
//#include<iostream>
//#include<map>
//#include<vector>
//#include <string>
//#include <sstream>
//#include<regex>
//#pragma warning(disable:4996)
//using namespace std;
//map<string, string> dic;
//stringstream ss;
//void fuc1(string s) {
//    string temp, key, value;
//    int type = 0;
//    while (ss >> temp) {
//        if (temp == "{") {
//            dic[key] = "OBJECT";
//            fuc1(key + '.');
//            type = 0;
//        }
//        else if (temp == "}") {
//            return;
//        }
//        else if(type == 0){
//            key = s + temp.substr(1, temp.size() - 2);
//            type = 1;
//        }
//        else {
//            value = temp.substr(1, temp.size() - 2);
//            dic[key] = value;
//            type = 0;
//        }
//    }
//}
//int main() {
//    int n, m;
//    string s = "";
//    scanf("%d%d%*c", &n, &m);
//    for (int i = 0;i < n;i++) {
//        string temp;
//        getline(cin, temp);
//        s.append(temp);
//    }
//
//    //把各个关键词义分隔开
//    //注意前两个的顺序不能颠倒，颠倒了会把\\“解析成“
//    s = regex_replace(s, regex("\\\\\""), "\"");
//    s = regex_replace(s, regex("\\\\\\\\"), "\\");
//    s = regex_replace(s, regex("\\{"), " { ");
//    s = regex_replace(s, regex("\\}"), " } ");
//    s = regex_replace(s, regex(","), " ");
//    s = regex_replace(s, regex(":"), " ");
//
//    ss << s;
//    fuc1("");
//
//    for (int i = 0;i < m;i++) {
//        string s;
//        getline(cin, s);
//        s = '.' + s;
//        if (dic[s] == "OBJECT") {
//            cout << "OBJECT" << endl;
//        }
//        else if (dic[s] == "") {
//            cout << "NOTEXIST" << endl;
//        }
//        else {
//            cout << "STRING " + dic[s] << endl;
//        }
//    }
//    return 0;
//}