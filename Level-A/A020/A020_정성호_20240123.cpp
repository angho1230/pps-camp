#include <bits/stdc++.h>

using namespace std;

int main(){
    int total = 0;
    int max = 0;
    for(int i = 0; i < 4; i++){
	int in, out;
	cin >> out >> in;
	total = total + in - out;
	if(total > max) max = total;
    }
    cout << max << endl;
}
