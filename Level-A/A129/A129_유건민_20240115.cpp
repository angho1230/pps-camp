#include <iostream>
#include <cstring>
using namespace std;

int cache[12];

int fun(int n) {
    if (cache[n]) return cache[n];
    cache[n] = fun(n - 1) + fun(n - 2) + fun(n - 3);
    return cache[n];
}

int main(void) {
    
    memset(cache, 0, sizeof(cache));
    cache[1] = 1;
    cache[2] = 2;
    cache[3] = 4;
    int n,a;

    cin >> n;
    while (n--) {
        cin >> a;
        cout << fun(a) << '\n';
    }
    return 0;
}