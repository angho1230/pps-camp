#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int p = x;
    int t = 0;
    while(x != 0){
        t += x%10;
        x /= 10;
    }
    return p % t == 0;
}