#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        for(int i=0; i<word.length(); i++) {
            if(word[i] == ch) break;
            index++;
        }
        if(index == word.length()) return word;
        string s = "";
        for(int i=index; i>=0; i--) {
            s += word[i];
        }
        if(index+1 == word.length()) return s;
        for(int i=index+1; i<word.length(); i++) {
            s += word[i];
        }
        return s;
    }
};