#include <bits/stdc++.h>
#include <variant>

using namespace std;

void visit(vector<vector<int>>& world,  vector<vector<bool>>& visited, int i, int j);

int main(){
  int w, h;
  vector<int> answer;
  while(true){
    cin >> w >> h;
    if(w==0 && h == 0) break;
    vector<vector<int>> world(h, vector<int>(w)); 
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        cin >> world[i][j];
      }
    }
    int count = 0;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        if(world[i][j] && !visited[i][j]){
          visit(world, visited, i, j);
          count ++;
        }
      }
    }
    answer.push_back(count);
  }
  for(int i = 0; i < answer.size(); i++){
    cout << answer[i] << endl;
  }
}

void visit(vector<vector<int>>& world,  vector<vector<bool>>& visited, int i, int j){
  int h = world.size();
  int w = world[0].size();
  visited[i][j] = true;
  if(i-1 >= 0 && !visited[i-1][j] && world[i-1][j]) visit(world, visited, i-1, j);
  if(i-1 >= 0 && j-1 >= 0 && !visited[i-1][j-1] && world[i-1][j-1]) visit(world, visited, i-1, j-1);
  if(i-1 >= 0 && j+1 < w && !visited[i-1][j+1] && world[i-1][j+1]) visit(world, visited, i-1, j+1);
  if(i >= 0 && j-1 >= 0 && !visited[i][j-1] && world[i][j-1]) visit(world, visited, i, j-1);
  if(i >= 0 && j+1 < w &&!visited[i][j+1] && world[i][j+1]) visit(world, visited, i, j+1);
  if(i+1 < h && !visited[i+1][j] && world[i+1][j]) visit(world, visited, i+1, j);
  if(i+1 < h && j-1 >= 0 && !visited[i+1][j-1] && world[i+1][j-1]) visit(world, visited, i+1, j-1);
  if(i+1 < h && j+1 < w && !visited[i+1][j+1] && world[i+1][j+1]) visit(world, visited, i+1, j+1);
}
