#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    int sum = -1;
    for (int i = 0; i < n; i++) {
        int number; cin >> number;
        sum+= number;
    }
    //cout << sum << endl;
    int residuo = sum % (n+1);
    //cout << residuo << endl;
    int counter = 0;
    for (int i = 1; i <= 5; i++) {
        residuo++;
        if(residuo%(n+1) != 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
