#include <cctype>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum = 0;
        for(int i=0; i<operations.size(); i++) {
            if(operations[i] == "+") {
                sum+= record[record.size()-1] + record[record.size()-2];
                record.push_back(record[record.size()-1] + record[record.size()-2]);
            }
            else if(operations[i] == "D") {
                sum+= record[record.size()-1] * 2;
                record.push_back(record[record.size()-1]*2);
            }
            else if(operations[i] == "C") {
                sum -= record[record.size()-1];
                record.pop_back();
            }
            else {
                sum += stoi(operations[i]);
                record.push_back(stoi(operations[i]));
            }
        }
        
        return sum;
    }
};