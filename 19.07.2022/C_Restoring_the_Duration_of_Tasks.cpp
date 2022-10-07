#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin  >> t; 
    while(t--) {
        int n; cin>> n;
        int s[n];
        int f[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> f[i];
        }
        int time = 0;
        for (int i = 0; i < n; i++) {
            time = max(time, s[i]);
            cout  << f[i] - time << " ";
            time =  f[i];
        }
        cout << endl;
        
        
    }
    return 0;
}
