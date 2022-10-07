#include <bits/stdc++.h>
using namespace std;
set<pair<int, pair<int, int>>> baskets;

int main(int argc, char const *argv[]) {
    int n, m; cin >> n >> m;
    int cont = 0;
    for (auto x: baskets) {
        cont++;
        x.first = 0;
        x.second.first = abs((m+1)/2 - cont);
        x.second.second = cont; 
    }

    for (int i = 0; i < n; i++) {
        pair<int, pair<int, int>> pairN = *baskets.begin();
        //pair<int, pair<int, int>> *basket = baskets.begin();
        cout << (*baskets.begin()).second.second << endl;

        baskets.begin().first = ;
    }
        
    
    return 0;
}
