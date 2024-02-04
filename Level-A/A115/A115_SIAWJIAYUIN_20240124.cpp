#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b, a, l, o, n;
        b=a=l=o=n = 0;
        for(int i=0; i<text.length(); i++) {
            if(text[i] == 'b') b++;
            else if(text[i] == 'a') a++;
            else if(text[i] == 'l') l++;
            else if(text[i] == 'o') o++;
            else if(text[i] == 'n') n++;
        }
        int count = 0;
        while(a&&b&&l&&o&&n) {
            if(b>0 && a>0 && l>1 && o>1 && n>0) {
                b--;
                a--;
                l -= 2;
                o -= 2;
                n--;
                count++;
            }
            else break;
        }
        return count;
    }
};