#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s) {
            if (isalnum(c)) {
                str += tolower(c);
            }
        }
        for(int i=0; i<str.length(); i+=2) {
            if(str[i] != str[str.length()-1-i]) return false;
        }

        return true;
    }
};