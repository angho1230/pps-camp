#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ori = heights; 
        sort(heights.begin(), heights.end());
        int count = 0;
        for(int i=0; i<heights.size(); i++) {
            if(heights[i] != ori[i]) count++;
        }
        return count;
    }
};