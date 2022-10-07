#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin>> t; 
    while (t--) {
        int n; cin>> n;
        int lastNumber; cin >> lastNumber;
        int counter = 0;
        for(int i= 0; i<n-1; i++) {
            int num; cin >> num; 
            double maxNum =  max(lastNumber, num);
            double minNum = min(lastNumber, num);
            if (maxNum/minNum>2.0) {
                if(minNum == lastNumber) {
                    //cout << "POPO" << endl;
                    while (lastNumber*2 < num) {
                        //cout << "." << endl;
                        lastNumber *= 2;
                        counter++;
                    }
                    
                } else {
                    //cout << "CACA " << endl;
                    while (lastNumber/2.0 > num) { 
                       
                        lastNumber = ceil(lastNumber/2.0);
                        //cout<< lastNumber << endl;
                        counter++;
                    }
                }
            }
            lastNumber = num; 
        }

        cout << counter << endl;
    }
    
    return 0;
}
