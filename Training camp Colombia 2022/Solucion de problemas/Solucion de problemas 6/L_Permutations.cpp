#include <bits/stdc++.h>
using namespace std;
void display(vector<int> a, int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
int main(int argc, char const *argv[]) {
    int n, k; cin >> n >> k;
    int m[n][k];
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for(int j=0; j<k; j++) {
            m[i][j] = s[j] - '0';
        }
    }

    vector<int> permutations(k);
    for (int i = 0; i < k; i++) {
        permutations[i] = i;
    }
    int minResta = INT_MAX;
    do{
        //Display the current permutation
        //display(permutations, k);
        int minN, maxN;
        minN = INT_MAX;
        maxN = -INT_MAX;
        for (int i = 0; i < n; i++) {
            int number = 0; 
            for (int j = 0; j < k; j++) {
                (number*=10) += m[i][permutations[j]];
            }
            //cout << number << "\n"<< endl;
            minN = min(number, minN);
            maxN = max(number, maxN);
        }
        int localResta = maxN - minN;
        
        minResta = min(minResta, localResta);

        //cout << localResta << endl;
        
    }while(next_permutation(permutations.begin(), permutations.end()));

    cout << minResta << endl;
    /* for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << m[i][j];
        }
        cout << endl;
        
    } */
    
        
    return 0;
}
