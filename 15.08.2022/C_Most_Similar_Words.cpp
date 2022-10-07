#include <bits/stdc++.h>
using namespace std;

int count(string a, string b) {
    int ans = 0;
    for (int i = 0; i < a.length(); i++) {
        ans += abs(a[i] - b[i]);
    }
    return ans;
    
}

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n>> m;
        vector <string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i +1; j < n; j++) {
                int localCal = count(words[i], words[j]);
                if(localCal < ans) {
                    ans = localCal;
                }
            }
            
        }
        
        cout << ans << endl;
        
    }
    
    return 0;
}
