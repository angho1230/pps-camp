#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int flag = 0;
        for(int i=0; i<nums1.size(); i++) {
            flag = 0;
            for(int j=0; j<nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    int curr = nums2[j];
                    while(j < nums2.size()) {
                        if(curr < nums2[j]) {
                            ans.push_back(nums2[j]);
                            flag = 1;
                            break;
                        }
                        j++;
                    }
                    if(flag == 1) break;
                }
            }
            if(flag == 0) ans.push_back(-1);
        }
        return ans;
    }
};