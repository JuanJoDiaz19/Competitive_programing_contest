#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n ; cin >> n;
    vector <int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    if(numbers.size()%2 == 0) {
        cout << numbers[(numbers.size()/2)-1] << endl;
    } else {
        cout << numbers[(numbers.size()/2)] << endl;
    }
    
    return 0;
}
