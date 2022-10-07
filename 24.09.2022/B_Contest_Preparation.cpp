#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    int t; cin >> t; 
    while (t--) {
        ll n, m; cin >> n>> m;
        if(n == 0) {
            cout << 0 << endl;
        } else if(n < m) {
            cout << 2 << endl;
        } else {
            n*=2;
            ll ans = ceil((double)n/m);
            cout << ans << endl;
        }
    }
    return 0;
}
