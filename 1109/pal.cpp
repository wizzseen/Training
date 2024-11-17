#include <bits/stdc++.h>
using namespace std;

string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }

    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";

    string longest = "";
    for (int i = 0; i < s.size(); i++) {
       
      string oddPalindrome = expandAroundCenter(s, i, i);
      


      if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }
        
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
    string str="";

    string result = longestPalindrome(str);
    cout << result << endl;

    return 0;
}

