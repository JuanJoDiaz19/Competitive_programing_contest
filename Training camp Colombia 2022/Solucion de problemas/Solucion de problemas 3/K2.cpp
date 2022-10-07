#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(int argc, char const *argv[]) {
    int n, m; cin >> n >> m;
    vector <ll> citties(n);
    vector <ll> towers(n);
    for (int i = 0; i < n; i++) {
        cin >> citties[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> towers[i];
    }
    int max = 0;
    int i = 0, j = 0;
    while(i < n && j < m) {
        cout << i << " " << j << " "<< max << endl; 
        if (i == 0) {
            max = abs(citties[i]-towers[j]);
        } 
        if (j < m-1) {
            //cout << m << endl;
            int diferencei =  abs(citties[i] - towers[i]);
            int diferencej = abs(citties[i]-towers[j+1]);
                
            if (diferencei < diferencej) {
                //cout<< " "<< diferencei << " " << max << endl;
                if (diferencei > max) {
                    max = diferencei;
                }
                i++;
                //cout << diferencei <<  " " << diferencej << " " << max << endl;
            } else {
                j++;
            }
        } else if (j == m-1 && i == n-1) {
            //cout << "." << endl;
            //cout << i << " " << j  << endl;
            int diferencei = abs(citties[i]-towers[j]);                    
            if (diferencei>  max) {
                max = diferencei;
            }
            j++;
            //cout << diferencei << " " << max << endl;
        } else if(j == m-1 && i != n-1) {
            int diferencei = abs(citties[i]-towers[j]);   
            if (diferencei >  max) {
                max = diferencei;
            }
            i++;
        }
    }
    cout << max << endl;
    return 0;
}
