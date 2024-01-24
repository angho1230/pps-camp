#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> twice;
        twice.push_back(nums[0]);
        for(int i=1; i<nums.size(); i+=2) {
            if(nums[i] != nums[i-1]) {
                return nums[i-1];
            }
        }

        return nums[nums.size()-1];
    }
};