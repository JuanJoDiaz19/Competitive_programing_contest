#include <bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[]) {
    int t; cin  >> t;
    while (t--) {

        int n; 
        cin >> n;
        for (int a = 3; a < n; a++) {
            int c = (n - a) / 2;
            int b = n - a - c;
            if (c > 1 && b+1 < a) {
                c--;
                b++;
            }
            if (a > b && b > c) {
                cout << b << ' ' << a << ' ' << c << endl;
                break;
            }
        }       
    }
    return 0;
}
