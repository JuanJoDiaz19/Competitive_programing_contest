#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    string line;
    getline(cin, line);

    stringstream ss(line);
    int x;
    vector <int> v;
    while(ss>> x) {
        v.push_back(x);
    }

    cout << v.size() << endl; 
    return 0;
}
