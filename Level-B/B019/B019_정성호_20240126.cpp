#include <bits/stdc++.h>

using namespace std;

void trav(vector<string>& grid, vector<vector<bool>>& checked, int i, int j, char ch){
    checked[i][j] = true; 
    if(i-1 >= 0 && checked[i-1][j] == false && grid[i-1][j]==ch){
        trav(grid, checked, i-1, j, ch);
    }
    if(j-1 >= 0 && checked[i][j-1] == false && grid[i][j-1]==ch){
        trav(grid, checked, i, j-1, ch);
    }
    if(i+1 < grid.size() && checked[i+1][j] == false && grid[i+1][j]==ch){
        trav(grid, checked, i+1, j, ch);
    }
    if(j+1 < grid.size() && checked[i][j+1] == false && grid[i][j+1]==ch){
        trav(grid, checked, i, j+1, ch);
    }
    if(ch == 'G') grid[i][j] = 'R';
}

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    vector<vector<bool>> g1(n, vector<bool>(n, false));
    vector<vector<bool>> g2(n, vector<bool>(n, false));
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    int c1 =0, c2 =0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g1[i][j] == false){
                trav(grid, g1, i, j, grid[i][j]);
                c1 ++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g2[i][j] == false){
                trav(grid, g2, i, j, grid[i][j]);
                c2 ++;
            }
        }
    }
    cout << c1 << " " << c2 << endl;
}
