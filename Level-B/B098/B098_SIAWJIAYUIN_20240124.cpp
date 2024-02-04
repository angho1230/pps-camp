#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int min = 1, max = nums.size(), flag = 0;
        vector<int> arr;
        for(int i=1; i<max+1; i++) {
            flag = 0;
            for(int j=0; j<max; j++) {
                if(i == nums[j]) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) arr.push_back(i);
        }
        return arr;
    }
};