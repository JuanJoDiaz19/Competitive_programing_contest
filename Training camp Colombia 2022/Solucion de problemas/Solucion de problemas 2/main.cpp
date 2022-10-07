#include <bits/stdc++.h>
using namespace std;
 
set <char> letters = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
vector <bool> isIn(26, false);
int main(int argc, char const *argv[]) {
    //cout << (int) 'a' << endl;
    int l; cin >> l;
    for (int i = 0; i < l; i++) {
        char a; 
        cin >> a;
        a = tolower(a);
        if (letters.find(a) != letters.end()) {
            //cout << ((int)a)-97 << endl; 
            isIn[((int)a)-97] = true;
        }
    }
    bool ans = true;
    for (int i = 0; i < 26; i++){
        //cout << isIn[i] << " "<< i << endl;
        if (!isIn[i]) {
            ans = false;
        }
        
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
