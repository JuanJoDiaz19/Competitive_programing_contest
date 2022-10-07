#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    int equal;
    bool flag = true;
    for (int i = 0; i < t && flag; i++) {
        int a, b; cin >> a >> b;
        if (i == 0) {
            equal =a -b;
        } else {
            if (a-b != equal) {
                flag = false;
            }
        }
    }
    if(flag) {
        cout << "idades corretas" << endl;
    } else {
        cout << "mentiu a idade" << endl;
    }
    
    
    return 0;
}
