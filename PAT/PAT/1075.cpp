//#include<iostream>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int N, K, M;
//int p[5];
//int user, pid, score;
//int pre = 1000000000, user_rank = 0, increse_rank = 1;
//struct scc {
//	bool is_dalao;
//	int id;
//	int sss[5];
//	int solved;
//	int total;
//};
//scc tts[10005];
//bool cmp(scc s1, scc s2) {
//	if (s1.total > s2.total) {
//		return true;
//	}
//	else if (s1.total < s2.total) {
//		return false;
//	}
//	else if(s1.solved > s2.solved){
//		return true;
//	}
//	else if (s1.solved < s2.solved) {
//		return false;
//	}
//	else {
//		return s1.id < s2.id;
//	}
//}
//int main() {
//	scanf("%d%d%d", &N, &K, &M);
//	for (int i = 0;i < K;i++) {
//		scanf("%d", &p[i]);
//	}
//	for (int i = 1;i <= N;i++) {
//		tts[i].id = i;
//		for (int j = 0;j < K;j++) {
//			tts[i].sss[j] = -1;
//		}
//	}
//	for (int i = 0;i < M;i++) {
//		scanf("%d%d%d", &user, &pid, &score);
//		if (score == -1) {
//			score = 0;
//		}
//		else {
//			tts[user].is_dalao = true;
//		}
//		if (score == p[pid - 1] && tts[user].sss[pid - 1] != p[pid - 1]) {
//			tts[user].solved++;
//		}
//		if (score > tts[user].sss[pid - 1]) {
//			if (tts[user].sss[pid - 1] == -1) {
//				tts[user].total--;
//			}
//			tts[user].total += (score - tts[user].sss[pid - 1]);
//			tts[user].sss[pid - 1] = score;
//		}
//	}
//	sort(tts + 1, tts + N + 1, cmp);
//	for (int i = 1;i < N + 1;i++) {
//		if (!tts[i].is_dalao) {
//			continue;
//		}
//		if (tts[i].total < pre) {
//			user_rank += increse_rank;
//			increse_rank = 1;
//			pre = tts[i].total;
//		}
//		else {
//			increse_rank++;
//		}
//		printf("%d %05d %d", user_rank, tts[i].id, tts[i].total);
//		for (int j = 0;j < K;j++) {
//			if (tts[i].sss[j] == -1) {
//				printf(" -");
//			}
//			else
//			    printf(" %d", tts[i].sss[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}