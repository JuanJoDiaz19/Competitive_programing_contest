# include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[9];
    for (int i = 0; i < 9; i++) {
        cin >> numbers[i];
    }

    int x; cin >> x;
    //cout << x << endl;
    int l, r, ans; l = 0; r = 9 -1;
    ans = -1;

    while (l <= r) {
        int mid = l + (r-l)/2;
        //cout << l << r << numbers[mid] << endl;
        //cout << numbers[mid] << endl;
        if (numbers[mid] == x) {
            ans = mid;
            break;
        } else if (numbers[mid] < x) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }

   cout << ans;
    

    
    return 0;
}
