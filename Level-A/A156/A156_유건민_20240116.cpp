#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000000];
int N, M;

bool check(int a) {
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > a) {
            sum += arr[i] - a;
        }
    }
    return (sum < M) ? true : false;
}

int main(void){
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    
    long long lo = 0;
    long long hi = arr[N-1]+1;
    while (lo + 1 < hi) {
        long long mid = (lo + hi) / 2;
        if (check(mid)) {
            hi = mid;
        }
        else {
            lo = mid;
        }
    }
    cout << lo;
    return 0;
}