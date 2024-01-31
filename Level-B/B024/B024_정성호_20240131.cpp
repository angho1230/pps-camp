class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> maxHeap;
        for(int i = 0; i < score.size(); i++){
            maxHeap.push({score[i], i});
        }
        vector<string> v (score.size());
        for(int i = 0; i < score.size(); i++){
            if(i == 0){
                v[maxHeap.top().second] = "Gold Medal";
            }
            else if(i == 1){
                v[maxHeap.top().second] = "Silver Medal";
            }
            else if(i == 2){
                v[maxHeap.top().second] = "Bronze Medal";
            }
            else{
                v[maxHeap.top().second] = to_string(i+1);
            }
            maxHeap.pop();
        }
        return v;
    }
};
