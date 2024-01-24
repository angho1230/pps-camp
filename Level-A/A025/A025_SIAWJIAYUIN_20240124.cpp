#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0) return 0;
        double exp=sqrt(n);
        if (exp!=(int)exp) return 0;
        return ((int)exp%2==0);
    }
};