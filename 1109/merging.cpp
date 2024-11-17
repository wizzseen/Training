#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> intervals) {
    for (int i = 0; i < intervals.size() - 1; i++) {
        for (int j = i + 1; j < intervals.size(); j++) {
            if (intervals[i][0] > intervals[j][0]) {
                swap(intervals[i], intervals[j]);
            }
        }
    }

    vector<vector<int>> output;
    vector<int> prev = intervals[0];
    
    for (int i = 1; i < intervals.size(); i++) {
        vector<int> interval = intervals[i];
        
        if (prev[1] >= interval[0]) {
            prev[1] = max(interval[1], prev[1]);
        } else {
            output.push_back(prev);
            prev = interval;
        }
    }
    output.push_back(prev); 
    return output;
}

int main() {
    vector<vector<int>> input = {{7,8},{1,5},{2,4},{4,6}};
    vector<vector<int>> output = merge(input);

    for (int i = 0; i < output.size(); i++) {
        cout << "[" << output[i][0] << "," << output[i][1] << "] ";
    }
    cout << endl;

    return 0;
}

