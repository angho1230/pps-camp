#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string new_s = "", new_st = "";
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '#') {
                if(!new_s.empty()) new_s.pop_back();
            }
            else new_s+=s[i];
        }

        for(int i=0; i<t.length(); i++) {
            if(t[i] == '#') {
                if(!new_st.empty()) new_st.pop_back();
            }
            else new_st+=t[i];
        }
        return (new_s == new_st); 
    }
};