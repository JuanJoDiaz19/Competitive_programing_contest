/* #include <bits/stdc++.h>
using namespace std;



int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4; 
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2 && y1 != y2 ) {

        int difX = abs(x1-x2);
        int difY = abs(y1-y2);

        if (difX != difY) {
            cout << -1 << endl;
        } else {
            x3 = min(x1, x2) + difX ;
            y3 = min(y1, y2);
            x4 = min(x1, x2);
            y4 = min(y1,y2) + difX;
            cout << x3 << " " << y3  <<" "<< x4 << " "<< y4 << endl;
        } 
    } else {
        if (x1 == x2){
            x3 = abs(y1-y2) + x1;
            y3 = max(y1, y2);
            x4 = x3;
            y4 = y3 - abs(y1-y2);
        } else if (y1 == y2) {
            x3 = max(x1, x2);
            y3 = abs(x1 -x2) + y1;
            x4 = min(x1, x2);
            y4 = abs(x1 -x2) + min(y1, y2);
        }
        cout << x3 << " " << y3  <<" "<< x4 << " "<< y4 << endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
        cout << -1 << endl;
    else if (x1 == x2){
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2 << endl;
    } else if (y1 == y2) {
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) << endl;
    } else {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
    return 0;
}