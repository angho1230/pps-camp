class KthLargest {
public:
    vector<int> v;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int i = 0; i < nums.size(); i++){
            if(v.size() < k){
                v.insert(v.begin() + search(nums[i]), nums[i]);
            }
            else{
                if(v[0] < nums[i]){
                    v.insert(v.begin() + search(nums[i]), nums[i]);
                    v.erase(v.begin());
                }
            }
        }
    }
    
    int add(int val) {
        if(v.size() == 0) v.push_back(val);
        else if(v[0] < val || v.size() < k){
            //cout << val << " : " << search(val) << endl;
            v.insert(v.begin() + search(val), val);
            if(v.size() > k)
                v.erase(v.begin());
        }
        return v[0];
    }

    int search(int target){
        if(v.size() == 0) return 0;
        int s = 0, e = v.size()-1, mid;
        while(s <= e){
            if(e-s == 1 || e==s){
                if(v[e]==target) return e;
                if(v[s]==target) return s;
                if(v[e] < target ) return e+1;
                if(v[s] > target) return s;
                return e;
            }
            mid=(e+s)/2;
            if(v[mid] == target) return mid;
            else if(v[mid] >= target){
                e = mid;
            }
            else{
                s = mid;
            }
        }
        return e;
    }


    
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */