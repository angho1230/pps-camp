class Solution {
    public long solution(int price, int money, int count) {
        
        long need = 0;
        for(int i=0; i<count; i++) {
            need += (i+1)*price;
        }
        need -= money;

        return (need <= 0)? 0:need;
    }
}