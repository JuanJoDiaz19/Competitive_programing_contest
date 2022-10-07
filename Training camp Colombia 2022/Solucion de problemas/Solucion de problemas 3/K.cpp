#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
   
    int n, m; cin >> n >> m;
    int cities[n], towers[m];
    

    int max = 0;
    
    if (n >= m) {
        for (int i = 0; i < n; i++) {
            cin >> cities[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> towers[i];
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            //cout << "." << endl;
            if (i == 0) {
                if (cities[i] > towers[j]) {
                    max = abs(cities[i]-towers[j]);
                } else{
                    max = abs(towers[i]-cities[j]);
                }
                
                
                //cout<<max << endl;
            }
            if (j < m-1) {
                //cout << m << endl;
                int diferencei;
                if (cities[i] > towers[j]) {
                    diferencei = abs(cities[i]-towers[j]);
                } else{
                    diferencei = abs(towers[j] - cities[i]);
                }

                int diferencej;
                if (cities[i] > towers[j]) {
                    diferencej = abs(cities[i]-towers[j+1]);
                } else{
                    diferencej = abs(towers[j+1] - cities[i]);
                }
                
                if ( diferencei < diferencej) {
                    //cout<< " "<< diferencei << " " << max << endl;
                    if (diferencei > max) {
                        max = diferencei;
                    }
                    
                    //cout << diferencei <<  " " << diferencej << " " << max << endl;
                } else {
                    //cout << "." << endl;
                    
                    /* if (diferencej > max) {
                        max = diferencei;
                    } */
                    //cout << diferencei << " " << diferencej << " " << max << endl << endl;
                    j++;
                }
                
            } else if (j == m-1) {
                //cout << "." << endl;
                //cout << j << endl;
                int diferencei;

                if (cities[i] > towers[j]) {
                    diferencei = abs(cities[i]-towers[j]);
                } else{
                    diferencei = abs(towers[j] - cities[i]);
                }
                
                if (diferencei>  max) {
                    
                    max = diferencei;
                }
                //cout << diferencei << " " << max << endl;
            } else {
                break;
            }
            
        }
    } else {
        //cout << "." << endl;
        for (int i = 0; i < n; i++) {
            cin >> towers[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> cities[i];
        }
        int temp = m;
        m = n;
        n = temp;
        int j = 0;
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            cout << "." << endl;
            if (i == 0) {
                if (cities[i] > towers[j]) {
                    max = abs(cities[i]-towers[j]);
                } else{
                    max = abs(towers[i]-cities[j]);
                }

                //cout << max << endl;
            }
            if (j < m-1) {
                cout << m << endl;
                int diferencei;
                if (cities[i] > towers[j]) {
                    diferencei = abs(cities[i]-towers[j]);
                } else{
                    diferencei = abs(towers[j] - cities[i]);
                }

                int diferencej;
                if (cities[i] > towers[j]) {
                    diferencej = abs(cities[i]-towers[j+1]);
                } else{
                    diferencej = abs(towers[j+1] - cities[i]);
                }
                
                if ( diferencei < diferencej) {
                    //cout<< " "<< diferencei << " " << max << endl;
                    if (diferencei > max) {
                        max = diferencei;
                    }
                    
                    //cout << diferencei <<  " " << diferencej << " " << max << endl;
                } else {
                    //cout << "." << endl;
                    
                    /* if (diferencej > max) {
                        max = diferencei;
                    } */
                    //cout << diferencei << " " << diferencej << " " << max << endl << endl;
                    j++;
                }
                
            } else if (j == m-1) {
                //cout << "." << endl;
                //cout << j << endl;
                int diferencei;

                if (cities[i] > towers[j]) {
                    diferencei = abs(cities[i]-towers[j]);
                } else{
                    diferencei = abs(towers[j] - cities[i]);
                }
                
                if (diferencei>  max) {
                    
                    max = diferencei;
                }
                //cout << diferencei << " " << max << endl;
            } else {
                break;
            }
            
        } 
    }
    

    cout << max;
    return 0;
}
