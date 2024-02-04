#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        int flag = 0;
        int len = s.length();
        while(len) {
            char prev = s[0];
            flag=0;
            for(int i=1; i<len; i++) {
                if(prev == s[i]) {
                    s.erase(i-1, 2);
                    flag = 1;
                    len-=2;
                    break;
                }
                prev = s[i];
            }
            if(flag == 0) break;
        }
        return s;
    }
};