#include <bits/stdc++.h>
using namespace std; 
vector <int> shoots; 

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    if(n%2 == 0) {
        cout << n/2 +1<< endl;
        for(int i = 1; i <= n; i+=2) {
            cout << i << " ";
        }
        cout << n << endl;
    } else {
        cout << n/2 +1 << endl;
        for(int i = 1; i <= n; i+=2) {
            cout << i << " ";
        }
        
    }
    
    /* int diference = 1;
    int lastShoot = 1;
    shoots.push_back(1);

    while(lastShoot < n) {
        //cout << "." << endl;
        diference++;
        lastShoot+= diference;
        if(lastShoot < n) {
            shoots.push_back(lastShoot);
        } else {
            shoots.push_back(n);
        }
    }

    cout << shoots.size() << endl;
    for (int i = 0; i < shoots.size(); i++) {
        cout << shoots[i] << " ";
    } */
    
    
    return 0;
}
