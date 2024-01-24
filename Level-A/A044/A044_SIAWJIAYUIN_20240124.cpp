#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        int a=0, l=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'A') a++;
            if(s[i] == 'L') {
                l++;
                if(l>=3) return false;
                continue;
            }
            l=0;
        }
        return (a<2);
    }
};