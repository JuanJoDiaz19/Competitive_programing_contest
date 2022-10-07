#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    int v, a, b, c; cin >> v>> a >> b >> c;

    v = v%(a+b+c);
    if(v-a<0) {
        cout << "F" << endl; 
    } else if(v-a-b <0) {
        cout  << "M" << endl;
    } else {
        cout << "T" << endl;
    }
    
    return 0;
}
