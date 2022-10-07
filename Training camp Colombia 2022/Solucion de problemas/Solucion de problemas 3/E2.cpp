#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    set<string> wrds;
    map<string, set<string>> dctnry;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        wrds.insert(a);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string nwW;
        cin>>nwW;
        int k;
        cin>>k;
        bool add=true;
        set<string> w;
        for(int j=0;j<k;j++){
            string h;
            cin>>h;
            if(wrds.find(h)==wrds.end()){
                w.insert(h);
                add=false;
            }
        }
        if(add){
            wrds.insert(nwW);
        }else{
            dctnry.insert({nwW, w});
        }
    }
    bool nu=true;
    while(nu){
        nu=false;
        vector<string> toD;
        for(pair<string, set<string>> nw:dctnry){
            bool an=true;
            for(string w:nw.second){
                if(wrds.find(w)==wrds.end()){
                    an = false;
                }
            }
            if(an){
                nu= true;
                wrds.insert(nw.first);
                toD.push_back(nw.first);
            }
        }
        for(string d:toD){
            dctnry.erase(d);
        }
    }
    cout<<wrds.size()<<endl;
    return 0;
