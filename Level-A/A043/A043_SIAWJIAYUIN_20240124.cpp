#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        char alpha;
        if(strs[0].length()<1) return prefix;
        if(strs.size() == 1) return strs[0];
        int i=0;
       while(1) {
            if(strs[0].length() < i+1) return prefix;
            alpha = strs[0][i];
            for(int j=0; j<strs.size(); j++) {
                if(strs[j][i] != alpha) return prefix;
            }
            prefix += alpha;
            i++;
        }
        return prefix;
    }
};