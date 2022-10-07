#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(int argc, char const *argv[]){
    int t; cin >> t;
    ll s,i,f;
    while (t--) {
        cin>>s>>i>>f;
        s+=f;
       
        ll ans=(s-i+1)/2;
       
        if(ans>0){
           cout<<min(ans,f+1)<<endl;
        }else{
           cout<<0<<endl;
        }
    }
    return 0;
}