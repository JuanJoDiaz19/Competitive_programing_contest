#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    vector <int> degrees(n+2);
    degrees[0] = 360;
    degrees[n+1] = 0;
    for (int i = 1; i < n+1; i++) {
        int d; cin>> d;
        d += degrees[i-1];
        if(d > 360) {
            d -= 360;
        }
        degrees [i] = d;

        //cout << degrees[i]<< " ";
    }

    //cout << endl;

    sort(degrees.begin(), degrees.end());

    int maxN = 0;
    for (int i = 0; i < n+2; i++) {
        //cout << degrees[i]<< " ";
        maxN = max(maxN, degrees[i] - degrees[i-1]);
    }
    //cout << endl;
    cout << maxN << endl;

    return 0;
}
