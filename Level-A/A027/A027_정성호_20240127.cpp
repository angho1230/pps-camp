#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    int len = 0;
    int num[10] = {0,};
    string answer = "";
    len = number.length() - k;
    int idx = 0;
    for(int i = 0; i < len; i++){
        char mm = '/';
        int tmpidx = -1;
        for(int j = idx; j <= k + i; j ++){
            if(number[j] == '9'){
                mm = number[j];
                tmpidx = j;
                break;
            }
            else if(mm < number[j]){
                mm = number[j];
                tmpidx = j;
            }
        }
        idx = tmpidx + 1;
        answer += mm;

    }
    return answer;
}
