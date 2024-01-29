#include <iostream>
using namespace std;

int main(void){
    int num;
    cin >> num;
    while(num--){
        int h,w,n;
        int room;
        cin >> h >> w >> n;
        room=100*(n%h);
        if(room==0) {
            room=100*h;
            room+=n/h;
        }else{
            room+=n/h+1;
        }
        cout << room << '\n';
    }
    return 0;
}
