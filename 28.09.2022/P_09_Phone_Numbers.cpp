#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    string s; cin >> s;
    int count8 = 0;
    int countx = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '8') {
            count8++;
        } else {
            countx++;
        }
    }
    int ans = 0;
    while (count8 > 0 || countx >0) {
        if(count8 >= 1 && countx >=10 ) {
            count8-=1;
            countx-=10;
            ans++;
        } else if(countx < 10 && countx + count8 >= 11) {
            count8-=(11-countx);
            countx = 0;
            ans++;
        } else {
            break;
        }
    }
    cout<< ans<< endl;
    return 0;
}
