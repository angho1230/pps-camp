#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string val = "";

        while(columnNumber > 0) {
            columnNumber--;
            int curr = columnNumber%26;
            columnNumber /= 26;
            val.push_back(curr + 'A');
        }
        reverse(val.begin(), val.end());
        return val;
    }
};