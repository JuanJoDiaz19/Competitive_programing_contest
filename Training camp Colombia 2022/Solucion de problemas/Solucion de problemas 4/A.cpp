#include <bits/stdc++.h>
using namespace std;
string hello = "hello";
int main(int argc, char const *argv[]) {
    string s; cin >> s;
    int counter = 0;
    int last = 0;
    for (int i = 0; i < hello.length() && counter < 5; i++) {
        for (int j = last; j < s.length(); j++) {
            if( hello[i] == s[j]) {
                counter ++;
                last = j+1;
                break;
            }
        } 
    }
    cout << (counter == 5?"YES": "NO") << endl;
    return 0;   
}
