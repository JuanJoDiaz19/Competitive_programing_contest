#include <bits/stdc++.h>
using namespace std;

//set <pair <int, pair <int, int>>> numbers {{4,{2, 2}}, {9,{3, 2}}, {16,{4, 2}}, {25,{5, 2}} {36,{6, 2}}, {4,{2, 2}} };

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        int x , y; cin  >> x >> y;
        if(y%x != 0) {
            cout << 0 << " " << 0 << endl;
        } else {
            cout << 1 << " " << y/x << endl;
        }
    }
    
    return 0;
}
