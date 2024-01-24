#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        int one=0, two=0;
        for(int i=0; i<s.length()/2; i++) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || 
            s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') one++;
            
            if(s[s.length()-1-i]=='a' || s[s.length()-1-i]=='e' || 
            s[s.length()-1-i]=='i' || s[s.length()-1-i]=='o' || s[s.length()-1-i]=='u' ||
            s[s.length()-1-i]=='A' || s[s.length()-1-i]=='E' || s[s.length()-1-i]=='I' || 
            s[s.length()-1-i]=='O' || s[s.length()-1-i]=='U') two++;
        }
        if(one==two) return true;
        return false;
    }
};