#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while(t--) {
        char matrix[8][8];
        bool flag = true;
        int lastcounter = 0;
        int counter = 0;
        pair <int, int> coordinate;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> matrix[i][j];
            }
        }
        for(int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if(matrix[i][j] == '#' && matrix[i-1][j-1] == '#' && matrix[i-1][j+1] == '#' && matrix[i+1][j-1] == '#' && matrix[i+1][j+1] == '#'){
                    cout << i+1 << " " << j +1 << endl;
                }
            }
            
        }
    }
    return 0;
}
