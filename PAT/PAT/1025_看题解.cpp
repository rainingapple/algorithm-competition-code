/*#include<vector>
#include<map>
#include<iostream>
#include <algorithm>
using namespace std;
struct record {
	string name;
	int home;
	int old_rank;
	int score;
	int rank;
	record(string a, int b, int c, int d, int e) :name(a), home(b), old_rank(c), score(d), rank(e) {}
};
struct node {
	string name;
	int score;
	node(string a, int b) :name(a), score(b) {}
};
bool cmp(node n1, node n2) {
	if(n1.score!=n2.score)
	    return n1.score > n2.score;
	else {
		return n1.name < n2.name;
	}
}
bool cmp2(record r1, record r2) {
	if(r1.score!=r2.score)
	    return r1.score > r2.score;
	else {
		return r1.name < r2.name;
	}
}
vector<record> fin_rank;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int k;
		cin >> k;
		vector<node> v;
		for (int j = 0;j < k;j++) {
			string s;
			int score;
			cin >> s >> score;
			v.push_back(node(s, score));
		}
		sort(v.begin(), v.end(), cmp);
		for (int j = 0;j < k;j++) {
			string s = v[j].name;
			int score = v[j].score;
			if (j > 0 && v[j - 1].score == score) {
				fin_rank.push_back(record(s, i + 1, fin_rank[j-1].old_rank, score,1));
			}
			else {
				fin_rank.push_back(record(s, i + 1, j + 1, score,1));
			}
		}
	}
	sort(fin_rank.begin(), fin_rank.end(),cmp2);
	cout << fin_rank.size() << endl;
	for (int i = 0;i < fin_rank.size();i++) {
		if (i > 0 && fin_rank[i].score == fin_rank[i-1].score) {
			fin_rank[i].rank = fin_rank[i-1].rank;
			cout << fin_rank[i].name << " " << fin_rank[i].rank << " " << fin_rank[i].home << " " << fin_rank[i].old_rank << endl;
		}
		else {
			fin_rank[i].rank = i + 1;
			cout << fin_rank[i].name << " " << fin_rank[i].rank << " " << fin_rank[i].home << " " << fin_rank[i].old_rank << endl;
		}
	}
	return 0;
}*/