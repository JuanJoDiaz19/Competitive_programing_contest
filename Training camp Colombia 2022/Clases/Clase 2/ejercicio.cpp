//Tenemos n monedas arbitratrias con valores arbitrarias y yo quiero pagar algo y me dicen que tengo que dar el 
//Monto exacto, entonces tengo que decidir si puedo pagar con las modenas que tengo 

/*
En este ejemplo no existen estrategias optimas para elegir las modenas para pagar
*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000+10, MAXK = 1000+10;
int a[MAXN];
bool dp[MAXN][MAXK];
bool visitado[MAXN][MAXK];
//Puedo pagar k con las primeras N monedas del arreglo A
bool f(int n, int k) {

    if(visitado[n][k]) {
        return dp[n][k];
    }

    bool respuesta;
    if(k == 0) {
        respuesta = true;
    } else if (n == 0) {
        respuesta = false;
    } else {
        // Este seria el caso donde no la moneda, ya que el k (cantidad a pagar) es la misma y el n-1 seria que la
        // cantidad de monedas que vamos a utilizar y se pone el -1 ya que no vamos a utilizar la moneda actual
        
        if(a[n] <= k) {
            bool no_usar_la_n = f(n-1, k);
            bool usar_la_n = f(n-1, k-a[n]);

            respuesta = no_usar_la_n || usar_la_n;
        } else {
            respuesta = f(n-1, k);
        }
    }
    
}
int main(int argc, char const *argv[]) {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[n];
    }

    int monto; cin>> monto;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < monto; j++) {
            visitado[i][j] = false;
        }
    }
    if(f(n, monto)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    //cout << f(n,monto) << endl;
    return 0;
}
