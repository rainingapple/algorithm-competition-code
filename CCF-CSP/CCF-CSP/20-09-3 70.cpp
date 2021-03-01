////这个在当初写架构的时候，采用的是递归求解，判环是很蠢的计数
////但是其实只要找到拓扑序，判环和求解都可以很顺畅的完成，也不用调用那么多的空间
//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//struct mech {
//	int low, high, output;
//	vector<int> input;
//	vector<int> life;
//};
//string door[6] = { "NOT","AND","OR","XOR","NAND","NOR" };
//map<string, int> mp;
//int q, m, n, S, status = 1;
//bool issolveing[505];
//bool flag[3005];
//int mode[505];
//mech dat[505];
//int inpu[10005][2505];
//int s_to_i(string s1) {
//	int ans = 0;
//	for (int i = 0;i <= s1.size() - 1;i++) {
//		ans *= 10;
//		ans += s1[i] - 48;
//	}
//	return ans;
//}
//int seek_fuc(int no) {
//	mech temp = dat[no];
//	if (mode[no] == 1) {
//		return temp.life[0] < 1;
//	}
//	else if (mode[no] == 2) {
//		for (int i = 0;i < temp.life.size();i++) {
//			if (temp.life[i] == 0)
//				return 0;
//		}
//		return 1;
//	}
//	else if (mode[no] == 3) {
//		for (int i = 0;i < temp.life.size();i++) {
//			if (temp.life[i] == 1)
//				return 1;
//		}
//		return 0;
//	}
//	else if (mode[no] == 4) {
//		int count = 0;
//		for (int i = 0;i < temp.life.size();i++) {
//			if (temp.life[i] == 1)
//				count++;
//		}
//		if (count % 2 == 0)
//			return 0;
//		else
//			return 1;
//	}
//	else if (mode[no] == 5) {
//		for (int i = 0;i < temp.life.size();i++) {
//			if (temp.life[i] == 0)
//				return 1;
//		}
//		return 0;
//	}
//	else if (mode[no] == 6) {
//		for (int i = 0;i < temp.life.size();i++) {
//			if (temp.life[i] == 1)
//				return 0;
//		}
//		return 1;
//	}
//}
//bool part_check(int no) {
//	if (issolveing[no])
//		return false;
//	issolveing[no] = true;
//	for (int i = 0;i < dat[no].input.size();i++) {
//		if (dat[no].input[i] > m) {
//			if (!part_check(dat[no].input[i] - m)) {
//				return false;
//			}
//		}
//	}
//	issolveing[no] = false;
//	return true;
//}
//bool check(int x) {
//	fill(issolveing, issolveing + 505, false);
//	return part_check(x);
//}
//int solve(int no) {
//	if (flag[no + m])
//		return dat[no].output;
//	for (int i = 0;i < dat[no].input.size();i++) {
//		int need_no = dat[no].input[i];
//		if (need_no <= m) {
//			dat[no].life.push_back(inpu[status][need_no]);
//		}
//		else if (!flag[need_no]) {
//			dat[no].life.push_back(solve(need_no - m));
//		}
//		else {
//			dat[no].life.push_back(dat[need_no - m].output);
//		}
//	}
//	dat[no].output = seek_fuc(no);
//	flag[no + m] = true;
//	return dat[no].output;
//}
//int main() {
//	//建立hash 
//	for (int i = 0;i < 6;i++) {
//		mp[door[i]] = i + 1;
//	}
//	cin >> q;
//	while (q--) {
//		for (int i = 0;i < 305;i++) {
//			dat[i].input.clear();
//		}
//		cin >> m >> n;
//		for (int i = 1;i <= n;i++) {
//			int count;
//			string temp;
//			cin >> temp;
//			mode[i] = mp[temp];
//			cin >> count;
//			for (int j = 1;j <= count;j++) {
//				cin >> temp;
//				if (temp[0] == 'I') {
//					dat[i].input.push_back(s_to_i(temp.substr(1, temp.size() - 1)));
//				}
//				else {
//					dat[i].input.push_back(s_to_i(temp.substr(1, temp.size() - 1)) + m);
//				}
//			}
//		}
//		bool flag1 = true;
//		for (int i = 1;i <= n;i++) {
//			if (!check(i)) {
//				cout << "LOOP" << endl;
//				flag1 = false;
//				break;
//			}
//		}
//		cin >> S;
//		for (int k = 1;k <= S;k++) {
//			for (int i = 1;i <= m;i++) {
//				cin >> inpu[k][i];
//			}
//		}
//		for (int k = 1;k <= S;k++) {
//			fill(flag, flag + 3005, false);
//			for (int i = 1;i <= n;i++) {
//				dat[i].life.clear();
//			}
//			status = k;
//			int count, no;
//			cin >> count;
//			for (int i = 0;i < count;i++) {
//				cin >> no;
//				if (flag1) {
//					solve(no);
//					cout << dat[no].output << " ";
//				}
//			}
//			if (flag1)
//				cout << endl;
//		}
//	}
//	return 0;
//}