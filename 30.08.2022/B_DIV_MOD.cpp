#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while(t--) {
        int l,r,a; cin >> l >> r >> a;
        int ans1 = (r/a) + r%a;
        int ans2 = ((r-1)/a) + (r-1)%a;
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}
