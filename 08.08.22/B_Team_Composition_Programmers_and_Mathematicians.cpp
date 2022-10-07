#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    int t; cin >> t; 
    while (t--) {
        ll at, bt; cin >> at >> bt;
        ll a, b; 
        a = min(at, bt);
        b = max(at, bt);
        if (4*a <= a+b && 3*a < b) {
            cout << a << endl;
        } else if ((a+b)/4 <= a) {
            cout << (a+b)/4 << endl;
        } 
    }
    
    return 0;
}
