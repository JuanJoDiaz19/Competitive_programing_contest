#include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]) {
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;
    vector<char> ans(n);
    for (int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            ans[i] = a[i]; 
        } else if(b[i] == c[i]) {
            ans[i] = b[i]; 
        } else if(c[i] == a[i]) {
            ans[i] = c[i]; 
        } else {
            ans[i] = a[i];
        }
    }
    for(int i= 0; i<n; i++) {
        cout << ans[i];
    }
    return 0;
}
