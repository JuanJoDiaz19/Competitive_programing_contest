#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    ll n; cin >> n;
    vector<ll> numbers(n);
    for (ll i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    /* for (int i = 0; i < n; i++) {
        cout << numbers[i] << endl;
    } */

    //cout << n << endl;
    bool flag = false;
    for (ll i = n-1; i >= 0; i--) {
        //cout << numbers[i] << endl;
        if( (n)%3== 0){
            //cout << i+1<< endl;
            cout << numbers[n-1] << endl;
            flag = true;
            break;
        }
        if((i != 0 && numbers[i] != numbers[i-1] && (i)%3== 0)){
            //cout << i+1<< endl;
            cout << numbers[i-1] << endl;
            flag = true;
            break;
        }
    }
    
    if (!flag){
        cout << -1 << endl;
    }
    return 0;
}
