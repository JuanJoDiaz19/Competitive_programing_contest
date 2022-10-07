#include <bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s; 
        int position = 0;
        position += 25* (int)(s[0] - 'a');
        if(s[1] < s[0]) {
           position += (int)(s[1] - 96);
        } else {
            position += (int)(s[1] - 96) - 1;
        }

        cout << position << endl;

    }
    
    return 0;
}
