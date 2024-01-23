#include <bits/stdc++.h>

using namespace std;

/*
 * 1 : A->B
 * 2 : A->C
 * 3 : B->A
 * 4 : B->C
 * 5 : C->A
 * 6 : C->B
 *
 *
 */

void pour(vector<vector<vector<bool>>>& c, int A, int B, int C, int dir){
    	
}

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    vector<vector<vector<bool>>> checked(201, vector<vector<bool>>(201, vector<bool>(201, false)));
    queue<vector<int>> q;
    q.push(vector<int>{0, 0, C});
    vector<int> answer;
    while(!q.empty()){
	vector<int> v = q.front();
	q.pop();
	if(checked[v[0]][v[1]][v[2]]) continue;
	checked[v[0]][v[1]][v[2]] = true;
	if(v[0] == 0) answer.push_back(v[2]);
	for(int i = 0; i < 6; i++){
	    if(v[0] != 0){
		q.push(vector<int>{v[0]-(B-v[1]) < 0 ? 0 : v[0]-(B-v[1]), v[1] + v[0] > B? B : v[1] + v[0], v[2]});
		q.push(vector<int>{v[0]-(C-v[2]) < 0 ? 0 : v[0]-(C-v[2]), v[1], v[0] + v[2] > C ? C : v[0] + v[2]});
	    }
	    if(v[1] != 0){
		q.push(vector<int>{v[0]+v[1] > A ? A : v[0]+v[1], v[1]-(A-v[0]) < 0 ? 0 : v[1]-(A-v[0]), v[2]});
		q.push(vector<int>{v[0], v[1]-(C-v[2]) < 0 ? 0 : v[1]-(C-v[2]), v[1] + v[2] > C ? C : v[1] + v[2]});
	    }
	    if(v[2] != 0){
		q.push(vector<int>{v[0] + v[2] > A ? A : v[0]+v[2] , v[1] , v[2]-(A-v[0]) < 0 ? 0 : v[2]-(A-v[0])});
		q.push(vector<int>{v[0], v[1]+v[2] > B? B : v[1] + v[2] , v[2]-(B-v[1]) < 0 ? 0 : v[2]-(B-v[1])});
	    }
	}
    
    }
    sort(answer.begin(), answer.end());
    for(int i = 0; i < answer.size(); i++){
	cout << answer[i] << " ";
    }
    cout << endl;
}
