#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n;
    int y = 0, m = 0;
    for (int i = 0; i < n; i++) {
	cin >> t;
	y += (t/30+1)*10;
	m += (t/60+1)*15;
    }
    if(m > y) cout << "Y " << y << endl;
    else if(m < y) cout << "M " << m << endl;
    else cout << "Y M " << y << endl;
}
