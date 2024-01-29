#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    
    int a;
    int b,c;
    int num=0;
    cin >> a;
    if(a<100){
        cout<<a;  
    }
    else{
        for(int i=100;i<=a;i++){
            b=((i/10)%10)-i%10;
            c=(i/100)-((i/10)%10);
            if(b==c){
                num++;
            }
        }
        cout<<num+99;
    }
    return 0;
}