#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    
    int num;
    int p[1000];
    int min=0;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> p[i];
    }
    sort(p,p+num);
    for(int i=0;i<num;i++){
        int sum=0;
        for(int j=0;j<=i;j++){
        sum+=p[j];
        }
        min+=sum;
    }
    cout << min;
    return 0;
}