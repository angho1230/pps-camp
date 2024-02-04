#include <algorithm>
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        vector<int> copy = score;
        sort(copy.begin(), copy.end(), greater<int>());
        for(int i=0; i<score.size(); i++) {
            for(int j=0; j<copy.size(); j++) {
                if(score[i] == copy[j]) {
                    if(j==0) ans.push_back("Gold Medal");
                    else if(j==1) ans.push_back("Silver Medal");
                    else if(j==2) ans.push_back("Bronze Medal");
                    else ans.push_back(to_string(j+1));
                    break;
                }
            }
        }
        return ans;
    }
};