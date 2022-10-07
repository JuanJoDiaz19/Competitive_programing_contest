#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mcd(ll num1,ll num2){
    ll mcd=0;
    ll a=max(num1,num2);
    ll b=min(num1,num2);
    do {
        mcd = b;
        b=a%b;
        a=mcd;
    } while(b!=0);
    return mcd;

}
ll mcm(ll num1,ll num2){
    ll mcm =0 ;
    ll a=max(num1,num2);
    ll b= min(num1,num2);
    mcm=(a/mcd(a,b))*b;
    return mcm;
}


int main(int argc, char const *argv[]) {
    ll n, a, b, p, q; cin  >> n >> a >> b >> p >> q;
    ll chocolates = 0;
    ll max1 = max(p,q);

    ll counterA = n/a;
    ll counterB = n/b;
    ll counterAB = n/ mcm(a,b);

    if(p>q) {
        counterB -= counterAB; 
    } else {
        counterA -= counterAB; 
    }

    chocolates = counterA * p + counterB * q;
    cout << chocolates << endl;
    return 0;
}
