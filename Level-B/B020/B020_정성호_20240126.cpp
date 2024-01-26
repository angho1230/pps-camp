#include <bits/stdc++.h>

using namespace std;

vector<bool> v(1000000, false);

void trav(vector<vector<int>>& grid, int i, int j, int value, int c, int& ans){
    c++;
    value = value*10 + grid[i][j];
    if(c==6){
        if(v[value] == false){
            v[value] = true;
            ans++;
        }
        return;
    }

    if(i-1 >= 0) trav(grid, i-1, j, value, c, ans);
    if(i+1 < 5)trav(grid, i+1, j, value, c, ans);
    if(j-1 >= 0)trav(grid, i, j-1, value, c, ans);
    if(j+1 < 5)trav(grid, i, j+1, value, c, ans);


}

int main(){
    vector<vector<int>> grid(5, vector<int>(5));
    int ans = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int value = 0, c = 0;
            trav(grid, i, j, value, c, ans);
        }
    }
    cout << ans << endl;
    return 0;
}
