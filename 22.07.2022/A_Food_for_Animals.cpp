#include <bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while(t--) {
        int a, b, c, x, y; cin  >> a>> b >> c >> x >> y; 
        x-= a; 
        y-= b; 
        if(x > 0) {
            c-= x;
        }
        if(y > 0) {
            c-= y;
        }
        if (c < 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        
    }
    return 0;
}
