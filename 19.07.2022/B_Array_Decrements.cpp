#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        bool flag = true;
        int n; cin >> n;
        vector <int> arrA(n);
        vector <int> arrB(n);
        for (int i = 0; i < n; i++) {
            cin >> arrA[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arrB[i];
        }
        int diference = INT_MAX;

        /* for(int i = 0; i < n; i++){
            if (arrB[i] != 0) {
                diference = min(diference, arrA[i] - arrB[i]);
            }
        }
 */

        for (int i = 0; i < n&&flag; i++) {
            if (arrB[i] != 0) {
                if (diference == INT_MAX)  {
                    diference = arrA[i] - arrB[i];
                } else {
                    if(diference !=  arrA[i] - arrB[i]) {
                        flag = false;
                    }
                }
            } 
            if(arrA[i] < arrB[i]) {
                flag = false;
            }
            
        }

        for(int i = 0; i<n; i++) {
            if(arrB[i] == 0 && arrA[i] - arrB[i] > diference) {
                flag = false;
            }
        }

        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
    
    return 0;
}
