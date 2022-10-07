#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while(t--) {
        int runners[4];
        int counter = 0;
        for (int i = 0; i < 4; i++) {
            cin >> runners[i];
            if (i!= 0 && runners[i] > runners[0]) {
                counter++;
            }
        }  
        cout << counter << endl;
    }

    return 0;
}
