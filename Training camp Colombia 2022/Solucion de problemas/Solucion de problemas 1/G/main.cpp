#include <bits/stdc++.h>
 
using namespace std;
 
int search(int l, int r, int x, int a[]){
    int p=-1;
    for (int i = 0; i < (r-l) +1 && (l+i < r-i); i++) {
        //cout << a[l -1+ i] << " " << a[r-1-i] << endl;
        if (a[r -1 -i]!= x) {
            p = (r-i);
            break;
        }
        if (a[l -1 + i] != x) {
            p = (l + i);
            break;
        }
        
    }

    //cout << "\n\n";
    
    return p;
}
 
int main() {
  int n;
  int m;
    cin>>n>>m;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        if (a[i] != a[i])
        {
            /* code */
        }
        
    }
    int l, r, x;
 
    for(int i=0; i<m; i++){
        cin>>l>>r>>x;
        
       cout<<search(l,r,x,a)<<endl;
        
    }
}