#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(int argc, char const *argv[]) {FIN;
    int t; cin >> t;
    int counter  = 1;
    while (t--) {
        int n; cin >> n;
        cout << "Case #" <<  counter << ": " << n/3 << "\n"; 
        counter++;
    }
    return 0;
}
