#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    
   /*  int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++) {
        cin >> vec[i];
    } */
   

    int k; cin >> k;

    for (int i = 0; i < k+1; i++) {
        string response;
        getline(cin, response);
        cout << response.length() << endl;
    }

    
    
    return 0;
}
