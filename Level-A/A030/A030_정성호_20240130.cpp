#include <bits/stdc++.h>
#include <ostream>

using namespace std;

int n, day;
double a, b, c, d;
double init;

double cal(int i){
    if(i==1){
        return init; 
    }
    double r = cal(i-1);
    return r*a+(1 - r) * c;
}

int main(){
    cin >> n >> day;
    cin >> a >> b >> c >> d;
    if(day == 0) init = a;
    else init = c;
    int r = cal(n) * 1000;
    cout << r << '\n' << 1000-r << endl;
}

