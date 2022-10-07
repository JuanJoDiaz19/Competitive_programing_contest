#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
    map<int, int> numbers;
    vector <int> sums(1000, 0);
    //pair <int,int> max {0,0};
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (numbers.find(a) == numbers.end()) {
            numbers.insert({a,1});
        } else {
            numbers[a]+= 1;
        }  
    }
    int maxnum = 0;

    for(auto &x: numbers) {
        //cout << x.first << " " << x.second << endl;
        int sum = x.second;
        if(maxnum < sum) {
            maxnum = x.second;
        }
    }
    cout << maxnum << " " << numbers.size();

    return 0;
}
