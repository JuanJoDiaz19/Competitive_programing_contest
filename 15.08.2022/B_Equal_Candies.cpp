#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> numbers(n);
        for(int i =0; i <n; i++) {
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        //int lower = numbers[0];
        int ans = 0;
        for (int i = 1; i < n; i++) {
            //cout << numbers[i] - numbers[0] << " ";
            ans+= numbers[i] - numbers[0];
        }
        cout << ans << endl;
        
    }
    
    return 0;
}
