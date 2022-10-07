#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if(towlower(s[0]) == 'y' && towlower(s[1]) == 'e' && towlower(s[2]) == 's' ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
