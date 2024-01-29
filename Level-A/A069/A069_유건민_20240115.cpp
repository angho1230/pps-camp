#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int ans[1000];

int main(void) {
    
    int N, K;
	cin >> N >> K;
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < K-1; j++) {
			q.push(q.front());
			q.pop();
		}
		ans[i] = q.front();
		q.pop();
	}
	cout << "<";
	for (int i = 0; i < N-1; i++) {
		cout << ans[i] << ", ";
	}
	cout << ans[N - 1] << ">";
    return 0;
}