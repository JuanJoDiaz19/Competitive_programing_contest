#include <bits/stdc++.h>
using namespace std;

//Matriz de adyacencia -> O(n*n)
/* 0 0 4
   0 0 1
   4 1 0 */

const int MAXN  = 100000 +10;
//vector <pair<int, int>> g[MAXN];

vector <int> g[MAXN];
vector<pair<int, int>> aristas;

//Formas de representar grafos
int main(int argc, char const *argv[]) {

    aristas.push_back({1,3});
    g[1].push_back(aristas.size() - 1);
    g[3].push_back(aristas.size()-1);



    //Esto seria cuando el grafo es no dirigido

    // A la lista de vecinos de 1 agregale 3
    g[1].push_back({3,4});
    //A la lista de vecions de 3 agregale 1
    g[3].push_back({1,4});


    return 0;
}
