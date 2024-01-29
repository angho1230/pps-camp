#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fun(int k, int n) {
    if (k == 0) {
        return n;
    }
    else {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += fun(k - 1, i);
        }
        return sum;
    }
}


int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        cout << fun(k, n)<<'\n';
    }
    
    return 0;
}