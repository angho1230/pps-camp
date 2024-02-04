#include <string>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueSet;

        for (int num : nums) {
            if (uniqueSet.count(num) > 0) {
                return true;
            }
            uniqueSet.insert(num);
        }

        return false;
    }
};