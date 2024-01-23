#include <bits/stdc++.h>
#include <ostream>

using namespace std;

int main(){
    int n, in;
    cin >> n;
    int total = 0-n+1;
    for(int i = 0; i < n; i++){
	cin >> in;
	total += in;
    }
    cout << total << endl;
}
