#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int last = 0;
    int counter=0;
    int counter1=0;
    string s; cin >> s;
    char l[3] = {'Q', 'A', 'Q'};
    vector <char> q;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'Q' || s[i] == 'A') {
            q.push_back(s[i]);
            //cout << s[i] << endl;
        }
    }
    for (int i = 0; i < q.size(); i++) {
        for (int j = i+1; j < q.size(); j++) {
            for (int k = j+1; k < q.size(); k++) {
                if(q[i] == l[0] && q[j] == l[1] && q[k] == l[2]) {
                    //cout << " " << i<< " " << j << " " << k << endl;
                    counter ++;
                }
            }
            
        }
        
    }

    cout << counter << endl;
    return 0;
}
