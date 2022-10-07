#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    string s; cin >> s;
    vector<int> numbers;
    for(int i = 0; i<s.size(); i+= 2) {
        numbers.push_back(s[i] - '0');
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        if(i!= numbers.size()-1) {
            cout << numbers[i] << "+";
        } else {
            cout << numbers[i];
        }
        
    }
    
    return 0;
}
