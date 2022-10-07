#include <bits/stdc++.h>
using namespace std;
string pokemons[] {"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};

string findPoke(string s) {
    if (s.length() == 8) {
        return "vaporeon";
    } else if (s.length() == 6){
        return "espeon";
    } else {
        for (int i = 0; i < 6; i++) {
            //printPoke();
            //cout << endl;
            for (int j = 0; j < 4; j++) {
                if (s[j] != '.' && s[j] != pokemons[i][j]) {
                    break;
                }
                if (j == 3) {
                    return pokemons[i];
                }      
            }  
        }  
    }
    return pokemons[0];  
}
 
int main(int argc, char const *argv[]) {
    int t; cin >> t;
    string s; cin >> s;
 
    cout << findPoke(s) << endl;
    return 0;
}