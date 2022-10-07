#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    set <string> words;
    map <string, set<string>> diccionary;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        words.insert(s);
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        string s; int k; cin >> s >> k;
        set <string> keys;
        for (int j = 0; j < k; j ++) {
            string s0; cin >> s;
            keys.insert(s0);
        }
        diccionary[s] = words;
    }
    
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    for(auto &r: diccionary) {
        if(r.find()
    }
    for(auto &r: words) {
        for(auto &m: diccionary) {
            if (m.second().find(r) != m.end()) {
                /* code */
            }
            
        }
    }
    
    return 0;
}
