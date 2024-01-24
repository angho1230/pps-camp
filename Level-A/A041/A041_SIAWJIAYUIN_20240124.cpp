#include <string>
#include <vector>

using namespace std;

string solution(string s) {
     string ans = "";

        for(int i=0; i<s.length(); i++) {
            if(i==0 || s[i-1] == ' ') ans += toupper(s[i]);
            else ans += tolower(s[i]);
        }

        return ans;
}