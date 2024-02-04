#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, count=0;
        int size = nums.size();  

        while (i < size) {
            if (nums[i] == 0) {
                count++;
                nums.erase(nums.begin() + i); 
                size--;
            } else {
                i++;
            }
        }
        for(int j=0; j<count; j++) nums.push_back(0);
    }
};