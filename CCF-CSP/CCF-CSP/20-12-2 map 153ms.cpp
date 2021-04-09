//#include<iostream>
//#include<map>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//int n, a, b, thd = -1, ans = -1, index = 1, fin_ans;
//map<int,int> people;
//map<int, int> p_gua;
//vector<int> v;
//int real_dead[100005];
//int total[100005];
//void solution() {
//	int pre = people.begin()->first;
//	for (auto it = ++people.begin();it != people.end();it++) {
//		real_dead[index] = real_dead[index - 1] + p_gua[pre];
//		total[index] = total[index - 1] + people[pre];
//		pre = it->first;
//		index++;
//	}
//	for (int i = 0;i < index;i++) {
//		int temp = n - total[i] + 2 * real_dead[i] - real_dead[n];
//		if (temp >= thd) {
//			ans = i;
//			thd = temp;
//		}
//	}
//}
//int main() {
//	scanf("%d", &n);
//	for(int i=0;i<n;i++) {
//		scanf("%d%d", &a, &b);
//		people[a]++;
//		if (b == 0)
//			p_gua[a]++;
//	}
//	solution();
//	for (auto it = people.begin();ans>=0;it++) {
//		if (ans == 0)
//		{
//			fin_ans = it->first;
//			break;
//		}
//		ans--;
//	}
//	printf("%d", fin_ans);
//	return 0;
//}