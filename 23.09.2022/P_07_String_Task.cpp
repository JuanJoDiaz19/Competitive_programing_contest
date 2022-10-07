#include <bits/stdc++.h>
using namespace std; 

set<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};

int main() {
    string s; cin >> s;
    int ans = 0;
    string cons = "";
    for (int i = 0; i < s.size(); i++) {
        if(!vowels.count(tolower(s[i]))) {
            cons+= tolower(s[i]);
        } 
    }
    for (int i = 0; i < cons.size(); i++) {
        cout << "." << cons[i];
    }
    return 0;
}