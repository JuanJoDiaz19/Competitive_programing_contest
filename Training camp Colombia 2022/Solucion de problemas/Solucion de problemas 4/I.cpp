#include <iostream>
#include <vector>
 
using namespace std;
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
 
    while(t--) {
        int n, m; cin >> n >> m;
 
        int counter = 0;
 
        if (m==2) {
            for (int i=0; i<n; i++) {
                int a, b, c, d; cin >> a >> b >> c >> d;
                if (b == c) {
                    counter++;
                }
            }
        } else{
            for (int i=0; i<n; i++) {
                int a, b, c, d; cin >> a >> b >> c >> d;
                if (b == c) {
                    counter++;
                }
            }
        }
 
        if (m%2!=0 || counter < 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
 
    return 0;
}
