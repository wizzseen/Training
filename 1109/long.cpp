#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& huma) {
    if (huma.empty()) {
        return "-1";
    }

    sort(huma.begin(), huma.end());

    string first = huma[0];
    string last = huma[huma.size() - 1];

    int i = 0;
    while (i < first.length() && i < last.length() && first[i] == last[i]) {
        i++;
    }

    if (i == 0) {
        return "-1";
    }

    return first.substr(0, i);
}

int main() {
    vector<string> huma = {"Hello","world"};
    string result = longestCommonPrefix(huma);
    cout << result << endl;
    
    return 0;
}

