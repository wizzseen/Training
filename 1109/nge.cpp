#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void NGE(vector<int>& arr) {
    stack<int> gg;
    int kk;
    for(int i = arr.size() - 1; i >= 0; i--) {
        while(!gg.empty() && gg.top() <= arr[i]) {
            gg.pop();
        }
        if(gg.empty()) {
            cout << -1 << " ";
        } else {
            cout << gg.top() << " ";
        }
        gg.push(arr[i]);
    }
    cout << endl;
}

int main() {
    vector<int> arr = {4,5,2,25};
    NGE(arr);
    return 0;
}

