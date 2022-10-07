#include <bits./stdc++.h>
using namespace std;

int main(){
    int t=0, k=0;
    cin>>t;
    for(int i=0; i<t; i++){
        int n=0;
        cin>>n;
        if(n%5!=0){
            k=(n/5)+1;
        }else{
            k=(n/5);
        }

        cout<<k<<endl;
    }
}