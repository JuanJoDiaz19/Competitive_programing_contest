#include <bits/stdc++.h>
using namespace std;
//vector<vector<int>> matrix()

int main(int argc, char const *argv[]) {
    int n, k;cin >> n >> k;
    char matrix[n][n];  
    
    for ( int i = 0; i <  n; i++) {
        for(int j = 0; j< n; j++) {
            cin >> matrix[i][j];
        }
    }
    

    if(n == 2) {
        char newMatrix[n*n][n*n];
        for(int i =0 ; i< n; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == '.') {
                    newMatrix[i*2][j*2] = matrix[0][0];
                    newMatrix[i*2][j*2+1] = matrix[0][1];
                    newMatrix[i*2+1][j*2] = matrix[1][0];
                    newMatrix[i*2+1][j*2+1] = matrix[1][1];
                } else {
                    newMatrix[i*2][j*2] = '*';
                    newMatrix[i*2][j*2+1] = '*';
                    newMatrix[i*2+1][j*2] = '*';
                    newMatrix[i*2+1][j*2+1] = '*';
                }
            }
        }

        for (int i = 0; i < n*n; i++) {
            for (int j = 0; j < n*n; j++) {
                cout << newMatrix[i][j];  
            }
            cout << endl;
        }
    }    
    return 0;
}
