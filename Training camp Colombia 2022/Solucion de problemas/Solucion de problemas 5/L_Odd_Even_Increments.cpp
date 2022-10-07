#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin>> t;
    while(t--) {
        int n;
        cin >> n;
        bool even;
        bool odd;
        bool flag = false;
        int first, second; cin >> first >> second;
        if (first%2 == 0) {
            odd = true;
            //cout << "EL PRIMERO ES PAR";
        } else {
            odd = false;
            ///cout << "EL PRIMERO ES IMPAR";
        }
        if (second%2 == 0) {
            //cout << "EL SEGUNDO ES PAR";
            even = true;
        } else {
            //cout << "EL SEGUNDO ES IMPAR";
            even = false;
        }

        for (int i = 3; i < n+1; i++) {
            //cout << i << endl;
            int number ; cin >> number;
            if (i%2 == 1 && number%2 == 0 && !odd){
                //cout << "." << endl;
                flag = true;
            }
            if (i%2 == 1 && number%2 != 0 && odd){
                //cout << "." << endl;
                flag = true;
            }
            if (i%2 == 0 && number%2 != 0 && even) {
                //cout << "." << endl;
                flag = true;
            }
            if (i%2 == 0 && number%2 == 0 && !even) {
                //cout << "." << endl;
                flag = true;
            }
        }

        if (!flag) {
            cout  << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}
