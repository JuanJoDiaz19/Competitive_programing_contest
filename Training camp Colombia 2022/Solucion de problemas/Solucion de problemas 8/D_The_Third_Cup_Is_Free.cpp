#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(int argc, char const *argv[]) {
    int t; cin >> t;
    for (int j = 0; j < t; j++) {
        int n; cin >> n;
        ll sum = 0;
        vector <int> numbers;
        for(int i = 0; i<n; i++) {
            int number; cin >> number;
            numbers.push_back(number);
            sum += number;
        }
        sort(numbers.begin(), numbers.end());
        if (n<3) {
            cout << "Case #" << j+1<< ": " << sum << endl;
        } else {
            for(int i = numbers.size()-3; i>=0; i-=3) {
                sum -= numbers[i];
            }
            cout << "Case #" << j+1<< ": " << sum << endl;
        }   
    }
    return 0;
}
