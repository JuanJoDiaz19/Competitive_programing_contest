#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    ll n, L, a; cin >> n >> L >> a;
    ll lastMinute = 0; 
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll t, l; cin >> t >> l;
        if(t-lastMinute >= l) ans += (t-lastMinute) /a;
        lastMinute = t + l;
    }
    
    ans += (L - lastMinute) / a;
    cout << ans; 
    return 0;
}
