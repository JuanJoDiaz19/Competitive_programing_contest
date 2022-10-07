#include <bits/stdc++.h>
using namespace std; 
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long int ll;

int main(int argc, char const *argv[]) { FIN;
    int t ; cin >> t; 

    while (t--) {
        int n; cin >> n; 
        int numbers[n];
        int counter = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }
        
        int localMax = INT_MAX;
        //cout << t << "." << endl;
        for(int i=n-1; i >= 0 && flag; i--) { 
            //cout << localMax << endl;
            if(numbers[i] >= localMax) {

                

                //cout << i << endl;
                while (numbers[i] >= localMax && numbers[i] != 0) {
                    //cout << i << endl;
                    numbers[i]= numbers[i]/2;
                    counter++;
                    
                } 
                
            }
            localMax = numbers[i];
            if(i < n-1 && numbers[i+1] == 0) {
                flag = false;
            }
        }

        if(flag) {
            cout << counter << endl;
        } else  {
            cout << -1 << endl;
        }

    }
    
    return 0;
}
