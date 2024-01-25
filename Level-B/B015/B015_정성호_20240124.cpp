#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> visited(n , 0);
  vector<int> rock(n);
  for(int i = 0; i < n; i++){
    cin >> rock[i];
  }
  int start;
  cin >> start;
  queue<int> q;
  q.push(start-1);
  int count = 0;
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    if(visited[curr]) continue;
    visited[curr] = 1;
    count++;
    if(rock[curr] + curr < n){
      q.push(rock[curr] + curr);
    }
    if(curr - rock[curr] >= 0){
      q.push(curr - rock[curr]);
    }
  }
  cout << count << endl;
}
