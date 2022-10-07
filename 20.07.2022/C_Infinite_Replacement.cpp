#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main(int argc, char const *argv[]) {
    int t; cin >> t; 
    while(t--) {
        string s; cin >> s; 
        string t1; cin >> t1; 
        int lengthA = s.length();
        int counterTA = 0; 
        for (int i = 0; i < t1.length(); i++) {
            if (t1[i] == 'a') {
                counterTA++;
            }
        }

        if(t1.length() - counterTA > 0 && counterTA) {
            cout << -1 << endl; 
        } else if ( t1.length() - counterTA == 0) {
            if(counterTA == 1) {
                cout << 1 << endl;
            } else {
                cout<< -1 << endl;
            }
        } else {
            ll ans = pow(2, s.length());
            cout << ans << endl;
        }


        
    }
    return 0;
}
