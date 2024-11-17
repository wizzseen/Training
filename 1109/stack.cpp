#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void deleteMiddle(stack<int>& oo, int index = 0) {
    if (oo.empty()) return;
    int current = oo.top();
    oo.pop();
    if (index == oo.size()) return;
    deleteMiddle(oo, index + 1);
    oo.push(current);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5 , 6};
    stack<int> oo;
    
    for (int i = arr.size() - 1; i >= 0; --i) {
        oo.push(arr[i]);
    }

    deleteMiddle(oo);

    while (!oo.empty()) {
        cout << oo.top() << " ";
        oo.pop();
    }
    return 0;
}

