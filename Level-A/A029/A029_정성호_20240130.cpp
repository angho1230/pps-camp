#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 2; i <= n; i++){
        if(m == 1){
            m = 0;
        }else{
            m = 1;
        }
        v.push_back(m);
        if(i % 3 == 0 && v[1] != m){
            cout << "Love is open door" << endl;
            return 0;
        }
        if(i % 2 == 0 && v[0] != m){
            cout << "Love is open door" << endl;
            return 0;
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }
}
