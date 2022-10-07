#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    int m;
    cin>>n>>m;
    int a[n];
    vector <int> nextL(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l, r, x;
 
    for(int i=0; i<m; i++){
        cin>>l>>r>>x;
        
       cout<<search(l,r,x,a)<<endl;
        
    }
    return 0;
}
