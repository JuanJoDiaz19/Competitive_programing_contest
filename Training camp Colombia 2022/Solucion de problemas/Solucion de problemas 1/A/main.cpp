#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    for(int i=0; i<t ; i++) {
 
        int n; cin >> n;
        string names[n];
        int problems[n];
        int penalty[n];
        vector<int> index_max(1,0);
        
 
        for (int j = 0; j < n; j++) {
            cin >> names[j] >> problems[j] >> penalty[j];
 
            if (problems[j] == problems[index_max[0]]){
                index_max.push_back(j);
            }
            if (problems[j] > problems[index_max[0]]) { 
                index_max.clear();
                index_max.push_back(j);
            }
        } 
        
        int min = index_max[0];
        if(index_max.size() > 1) {
            
            for (int j = 0; j < index_max.size(); j++) {
                if(penalty[index_max[j]] < penalty[min]) {
                    min = index_max[j];
                } 
            }
            cout << names[min] << endl;
        } else {
            cout << names[index_max[0]] << endl;
        }
             
    }
}