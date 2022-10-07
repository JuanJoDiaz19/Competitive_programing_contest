#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    ll sum = 0;
    int lastIndex = 0;

    for (int j = 0; j < n; j++) {
        vector <int> numbers(n);
        cin  >> numbers[0] >> numbers[1] >> numbers[2]; 
        int maxVal = 0;
        if(j!=0){
           numbers[lastIndex]=0; 
        }
        
        
        for (int i = 0; i < 3; i++) {
            if(numbers[i] >maxVal) {
                maxVal = numbers[i];
                lastIndex = i;
            }
        }
        //cout << numbers[lastIndex] << endl;
        sum+=maxVal;
    }
    cout<< sum << endl;
    return 0;
}
