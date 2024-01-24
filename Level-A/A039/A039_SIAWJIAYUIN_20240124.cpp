#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(sqrt(num) == (trunc(sqrt(num)))) return true;
        return false; 
    }
};