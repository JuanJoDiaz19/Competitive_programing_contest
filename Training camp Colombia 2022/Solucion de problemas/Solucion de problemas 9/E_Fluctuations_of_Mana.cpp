#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main(int argc, char const *argv[]) {
    
    int n; cin >> n; 
    //ll numbers[n]; 
    ll sum = 0, initialMana = 0;
    
    for(int i = 0; i< n; i++ ) {
        
        ll mana; cin >> mana;

        if(i == 0) {
            
            sum = mana; 
            if(sum < 0) {
                initialMana += abs(sum);
                sum += abs(sum);
            }
        } else {
            //cout<< mana << " " << sum << endl;
            sum += mana;
            
            if (sum < 0) {
                //cout << sum << mana<< endl; 
                initialMana +=  abs(sum);
                sum += abs(sum);
            }
        }
    }

    cout << initialMana << endl;
    return 0;
}
