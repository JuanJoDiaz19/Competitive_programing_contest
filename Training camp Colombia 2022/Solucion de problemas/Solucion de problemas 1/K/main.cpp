#include <bits./stdc++.h>
using namespace std;

int main() {
    long a, number; cin >> a;
    vector<int> fibonacci {0,1};      
    
    if (a > 2) {
        if(a != 3) {
             while (a != fibonacci[fibonacci.size()-1]) {
                fibonacci.push_back(fibonacci[fibonacci.size()-1] + fibonacci[fibonacci.size()-2]);
                
                if (fibonacci.size() > 5) {
                    fibonacci.erase(fibonacci.begin());
                } 
            }
            cout << fibonacci[0] << " " <<  fibonacci[1] << " " <<  fibonacci[3];
        } else {
            cout << 1 << " " << 1  <<   " " << 1;
        }
    } else if(a == 2) {
        cout << 1 << " " << 1 << " " << 0;
    } else if(a == 1) {
        cout << 1 << " " << 0 << " " << 0;
    } else if(a==0) {
        cout << 0 << " " << 0 << " " << 0;
    }else {
        cout << "I'm too stupid to solve this problem";
    }
} 