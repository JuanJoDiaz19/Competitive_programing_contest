#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int a[4];

int main() {
    for(int i=0;i<4;i++) {
        cin >> a[i];
    }
    sort(a,a+4);
    if(a[0]==a[1]&&a[2]==a[3]) {
        cout << "YES";
    }
    else if(a[0]+a[3]==a[1]+a[2]) {
        cout << "YES";
    } else cout << "NO";

}