#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main(int argc, char const *argv[]) {
    ll t; cin >> t; 
    while (t--) {
        ll x, n; cin >> x>> n;
        if(x%2 == 0) {
            int ans = x%4;
            switch (ans) {
            case 0:
                cout << x << endl;
                break;
            case 1:
                cout << x-n << endl;
                break;
            case 2:
                cout << x+1 << endl;
                break;    
            case 3:
                cout << x +n + 1 << endl;
                break;    
            }
        } else {
            int ans = x%4;
            switch (ans) {
            case 0:
                cout << x << endl;
                break;
            case 1:
                cout << x+n << endl;
                break;
            case 2:
                cout << x-1 << endl;
                break;    
            case 3:
                cout << x-n - 1 << endl;
                break;    
            }
        }
    }
    
    
    return 0;
}
