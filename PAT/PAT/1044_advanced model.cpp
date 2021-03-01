//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	int n, cost;
//	cin >> n >> cost;
//	vector<int> v(n + 1);
//	vector<int> head;
//	vector<int> tail;
//	for (int i = 1;i <= n;i++) {
//		cin >> v[i];
//	}
//	int left = 1, right = 1;
//	int min_max = 1000000000;
//	int sum = v[1];
//	while (true) {
//		if (right > n || left > n)
//			break;
//		if (sum < min_max) {
//			if (sum < cost) {
//				right++;
//				if (right <= n)
//					sum += v[right];
//			}
//			else {
//				min_max = sum;
//				head.clear();
//				tail.clear();
//				head.push_back(left);
//				tail.push_back(right);
//				sum -= v[left];
//				left++;
//			}
//		}
//		else if (sum == min_max) {
//			head.push_back(left);
//			tail.push_back(right);
//			sum -= v[left];
//			left++;
//		}
//		else {
//			sum -= v[left];
//			left++;
//		}
//	}
//	for (int i = 0;i < head.size();i++) {
//		cout << head[i] << "-" << tail[i] << endl;
//	}
//	return 0;
//}