class Solution {
public:
    int addDigits(int num) {
        int div = num;
        int sum = 0;
        while(div > 0 || sum > 9) {
            if(!(div > 0)) {
                div = sum;
                sum = 0;
            }
            int rem = div%10;
            sum += rem;
            div /= 10;
        }
        return sum;
    }
};