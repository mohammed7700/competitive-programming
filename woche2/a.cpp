#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tests;
    int row, colum;

    cin >> tests;

    for(int i = 0; i < tests; i++) {

        cin >> row >> colum;

        if(row >= 3 && colum >= 4) {
            cout <<  row << " " << colum << "\n";
        }
        else if(row < 2 || colum < 2){

            cout << 1 << " " << 1 << "\n";

        } else if(row < 3 && colum < 3) {

            cout << 1 << " " << 1 << "\n";

        } else if(row == 3 && colum == 3) {

            cout << 2 << " " << 2 << "\n";

        }
        else if(row == 2 && colum == 3) {

            cout << 1 << " " << 2 << "\n";
        }
        else if(row == 3 && colum == 2) {

            cout << 2 << " " << 1 << "\n";
        }
        
    }


    return 0;
}