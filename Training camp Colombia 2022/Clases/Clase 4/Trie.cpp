#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll,ll> ii;

const int N = 1002;
const int alpha  = 26;

int trie[N][alpha];
int terminal[N];
int cnt[N];
int nodes;
//Como hacer un trie 
void add(string &s) {
    int at = 0;
    for(char c: s) {
        int x = c - 'a';
        if (trie[at][x] == 0) {
            trie[at][x] = nodes +1;
            nodes++;
        }
        at  = trie[at][x];
    }
    terminal[at] = 1;
}

int main(int argc, char const *argv[]) {
    
    return 0;
}
