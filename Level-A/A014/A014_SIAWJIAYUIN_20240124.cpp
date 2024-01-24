#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> results;
        for (int i = 0; i < nums.size(); ++i) {
            int start = nums[i];
            while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) {
                ++i;
            }
            if (start == nums[i]) {
                results.push_back(to_string(start));
            } 
            else {
                results.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
        }

        return results;
    }
};