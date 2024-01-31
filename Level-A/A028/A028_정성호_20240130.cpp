#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string a, b;
    cin >> a >> b;
    int ad = a.size()-1, bd = b.size()-1;
    int carry = 0;
    string answer;
    while(ad >= 0 || bd >= 0){
        char sum;
        if(ad >= 0 && bd >= 0){
            sum = a[ad] + b[bd] - '0' + carry;
            ad--;
            bd--;
        }
        else if(ad >= 0){
            sum = a[ad] + carry;
            ad--;
        }
        else if(bd >= 0){
            sum = b[bd] + carry;
            bd--;
        }
        if(sum > '9'){
            sum -= 10;
            carry = 1;
        }else{
            carry = 0;
        }
        answer = sum + answer;
    }
    if(carry == 1) answer = '1' + answer;
    cout << answer << endl;
}
