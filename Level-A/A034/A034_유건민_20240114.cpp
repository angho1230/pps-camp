#include <iostream>

using namespace std;

int main(void) {
    
    int num[10]={};
    int r[42]={};
    int cnt=0;
    for(int i=0;i<10;i++){
        cin >> num[i];
        r[num[i]%42]++;
    }
    for(int i=0;i<42;i++){
        if(r[i]!=0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
    return 0;
}