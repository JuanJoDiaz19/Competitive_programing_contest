#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll; 
const ll maxN = 1000000000000;

int main(int argc, char const *argv[]) {
    set <ll> cubes; 
    for (ll i = 1; i*i*i <= maxN; i++) { 
        //cout << i*i*i << endl;
        cubes.insert(i*i*i);
    }

    int t; cin >> t; 
    while(t--) {
        ll x; cin >> x;
        bool flag = true;
        for (ll i = 1; i*i*i <= x && flag; i++) {
            //cout << x-i*i*i<< endl;
            //cout << cubes.count(x-i*i*i) << endl;
            if (cubes.count(x-i*i*i)){
                flag = false;
            } 
        }
        
        if(!flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    
    return 0;
}
