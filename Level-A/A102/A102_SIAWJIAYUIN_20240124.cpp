#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> new_mat(matrix[0].size(), vector<int>(matrix.size(), 0));
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                //if(i==0 && j==0) new_mat.push_back(matrix[i][j]);
                new_mat[j][i] = matrix[i][j];
            }
        }
        return new_mat;
    }
};