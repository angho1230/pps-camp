#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main(void) {
    string word;
    int n;
    int gNum=0;
    bool isG=true;
  
    cin>>n;
    while(n--){
        string ap;
        cin>>word;
        isG=true;
        for(int i=0;i<word.size();i++){
            if(word[i]!=word[i+1]){
                if(ap.find(word[i])==string::npos) {
                    ap.append(word,i,1);
                }
                else{
                    isG=false;
                    break;
                }
            }
        }
        if(isG==true) gNum++;  
    }
    cout << gNum;
    
    return 0;
}
