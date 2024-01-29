#include <iostream>
#include <string>
using namespace std;


int main(void) {
    
    int N;
    cin >> N;
    while(N--){
        string ox;
        cin >> ox;
        int score = 0;
        int streak = 0;
        for(int i=0;i<ox.size();i++){
            if(ox[i]=='O'){
                streak++;
                score+=streak;
            }
            else{
                streak = 0;
            }
        }
        cout << score << "\n";
    }
    return 0;
}