#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(int argc, char const *argv[]) {
    int t; cin >> t; 
    while (t--) {
        string n; cin>> n;
        int numbers[n.length()];
        bool flag = false;
        for (int i = 0; i < n.length(); i++) {
            numbers[i] = n[i];
            if(numbers[i]%2 == 0) {
                flag = true;
            }
        }
        
        if(numbers[n.length()-1]%2 == 0){
            cout << 0 << endl;
        } else if (numbers[0]%2 == 0) {
            cout <<  1<< endl;
        } else if (flag) {
            cout <<  2<< endl;
        } else {
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}   