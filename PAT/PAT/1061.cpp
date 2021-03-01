//#include<iostream>
//#include<map>
//using namespace std;
//int main() {
//	string s1, s2, s3, s4;
//	string temp = "0123456789ABCDEFGHIJKLMN";
//	map<char, string> m1;
//	map<char, int> m2;
//	m1['A'] = "MON";
//	m1['B'] = "TUE";
//	m1['C'] = "WED";
//	m1['D'] = "THU";
//	m1['E'] = "FRI";
//	m1['F'] = "SAT";
//	m1['G'] = "SUN";
//	for (int i = 0;i < 24;i++) {
//		m2[temp[i]] = i;
//	}
//	cin >> s1 >> s2 >> s3 >> s4;
//	char note[3];
//	int num = 0;
//	for (int i = 0;i < s1.size() && i < s2.size();i++) {
//		if (s1[i] == s2[i] && num == 0 && m1.count(s1[i])) {
//			note[num++] = s1[i];
//		}
//		else if (s1[i] == s2[i] && num == 1 && m2.count(s1[i])) {
//			note[1] = s1[i];
//			break;
//		}
//	}
//	for (int i = 0;;i++) {
//		if ((s3[i] >= 'a' && s3[i] <= 'z') || (s3[i] >= 'A' && s3[i] <= 'Z')) {
//			if (s3[i] == s4[i]) {
//				note[2] = i;
//				break;
//			}
//		}
//	}
//	printf("%s %02d:%02d", m1[note[0]].c_str(), m2[note[1]], note[2]);
//	return 0;
//}