#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000 + 10;
int dp[MAXN];

//Esta funcion calcula el valor de la sucesion de fibonacci en un i concreto 

/*

Esta era la antigua funcion sin hacer dp
int fibonacci(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2); 
}
*/

// Complejidad es igual a cantidad de estados * operaciones que hace un estado

// Aqui lo que estamos haciendo es almacenar en un arreglo los numeros que ya hemos calculado y cuando vayamos a hacer
// un numero vamos a preguntar en el arreglo si ya lo ha calculado anteriormente es decir si en esa posicion es diferente a -1

int fibonacci(int n) {

    if (dp[n]!= -1) {
        return dp[n];
    }

    int ans;
    if (n == 0 || n == 1) {
        ans = 1;
    } else {
        ans =  fibonacci(n-1) + fibonacci(n-2); 
    }

    dp[n] = ans;

    return ans;
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i <=n; i++) {
        dp[i] = -1;
    }
    
    //Vamos a llenar el arreglo de 
    cout << fibonacci(n) << endl; 
    return 0;
}

/*
Podemos mirar la cantidad de llamadas que se hacen en el programa de acuerdo del valor de n:
1- 1
2 -1 
3 - 1 + 1 = 2
4 - 2 + 1 = 3
5 - 3 + 2 = 5 

Para calcular esto se pueden ver las llamadas que se hacen en el programa: 

Ejemplo: fibonacci(5) = fibonacci(4) + fibonacci(3)

fibonacci(4) = fibonacci(3) + fibonacci(2)              fibonacci(3) = fibonacci(2) + fibonacci(1)

fibonacci(3) = fibonacci(2) + fibonacci(1)           

Fijarse que hemos repetido el llamado de fibonacci(3), fibonacci(2), fibonacci(1)
*/
