#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {

        string s; cin >> s;
        int ans = 0;
        int firstNum = s[0] - '0';
        int ls = s.length();

        ans+= (firstNum-1) *10;
        for (int i = ls; i>=0 ; i--) {
            ans+=i;
        }
        
        cout << ans << endl;
        
    }
    
    return 0;
}
