#include <iostream>
#include <stack>
using namespace std;

void NGE(int arr[], int n) {
    stack<int> gg;
    for (int kk = 0; kk < n; kk++) {
        while (!gg.empty() && arr[gg.top()] < arr[kk]) {
            cout << arr[gg.top()] << " -> " << arr[kk] << endl;
            gg.pop();
        }
        gg.push(kk);
    }
    while (!gg.empty()) {
        cout << arr[gg.top()] << " -> -1" << endl;
        gg.pop();
    }
}

int main() {
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    NGE(arr, n);
    return 0;
}

