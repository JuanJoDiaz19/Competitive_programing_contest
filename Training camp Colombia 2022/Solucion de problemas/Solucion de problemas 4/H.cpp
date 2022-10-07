#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int ans = 0;
    
    int n, k; cin >> n >> k;

    vector <int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int counter = 0;
    for (int i = k; i < n; i++) {
        if( numbers[k-1] == numbers[i]) {
            counter ++;
        }
    }
    if(numbers[k-1] == 0 ) {
        cout << 0 << endl;
    } else {
        cout << counter + k << endl;
    }
}
