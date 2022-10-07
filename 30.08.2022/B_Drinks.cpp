#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    double sum = 0;
    for(int i = 0; i< n; i++) {
        int current; cin >> current;
        sum+= current;
    }

    cout << sum/n << endl;
    
    
    return 0;
}
