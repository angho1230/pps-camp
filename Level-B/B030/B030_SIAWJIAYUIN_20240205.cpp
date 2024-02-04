#include <algorithm>
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (k > 0 && i < nums.size() && nums[i] < 0) {
            nums[i] = -nums[i];
            k--;
            i++;
        }

        if (k % 2 == 1) {
            std::sort(nums.begin(), nums.end());
            nums[0] = -nums[0];
        }

        int total = 0;
        for (int num : nums) {
            total += num;
        }

        return total;
    }
};