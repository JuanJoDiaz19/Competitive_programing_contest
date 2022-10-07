#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    int r[n], l[n];
    int maxr= INT_MIN, minl = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> r[i] >> l[i];
        maxr = max(r[i], maxr);
        minl = min(l[i], minl);
    }

    int distanceToSupperate = maxr - minl;
    if(distanceToSupperate < 0) {
        cout << "NO" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            for(int j; j<n; j++) {
                
            }
        }
        
    }
    

    
    return 0;
}
