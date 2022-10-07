#include <bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[]) {
    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        int ans = 0; 
        vector <int> c(3); 
        for (int i = 0; i < n; i++) {
            int x; cin >> x; 
            c[x%3]++;
        }

        while (*min_element(c.begin(), c.end()) != n / 3) {
            for (int i = 0; i < 3; i++) {
                if(c[i] > n / 3) {
                    c[i]--;
                    ans ++;
                    c[(i+1)%3]++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
