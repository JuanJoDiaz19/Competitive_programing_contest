#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main(int argc, char const *argv[]) {
    for(int i= 1; i<50; i++) {
        ll n = pow(2, i);
        if( (n-1)%7 == 0 ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
         
    }
    return 0;
}
