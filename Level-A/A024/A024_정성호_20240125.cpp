class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0;
        int d10 = 0;
        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5) d5++;
            else if(bills[i] == 10){
                d5--;
                d10++;
                if(d5 < 0) return false;
            }
            if(bills[i] == 20){
                if(d10 > 0 && d5 > 0){
                    d10--;
                    d5--;
                }else if(d5 > 2){
                    d5-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};