#include <bits/stdc++.h>
using namespace std;
const int MAXN  = 100000 +10;
vector <int> g[MAXN];


//g[0] = {}
//g[1] = {}
//g[2] = {}

int main(int argc, char const *argv[])
{
    queue <int> pending;
    vector <bool> visited(n,false);
    pending.push(0);
    visited[0] = true;
    while(pending.size() > 0 ) {
        int now = pending.front();
        pending.pop();

        //Ahora tengo que visitar vecinos de now 
        for(int vecino: g[now]) {
            if(!visited[vecino]) {
                visited[vecino] = true;
                pending.push(vecino);
            }
        }
    }
    return 0;
}
