#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long numK[10000];
long long K, N;

long long check(long long a) {
    long long num=0;
    for (int i = 0; i < K; i++) {
        num += numK[i] / a;
    }
    return num;
}

int main(void) {
    
    cin >> K >> N;
    for (int i = 0; i < K; i++) {
        cin >> numK[i];
    }
    sort(numK, numK + K);
    long long hi, lo;
    lo = 0;
    hi = numK[K - 1]+1;

    while (lo + 1 < hi) {
        long long mid = (lo + hi) / 2;
        if (check(mid) < N) {
            hi = mid;
        }
        else {
            lo = mid;
        }
    }
    cout << lo;
    return 0;
}