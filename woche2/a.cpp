#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void checkIfTrapped(int row, int colum) {

    for(int i = row; 1 < i; i--) {

        for(int j = colum; 1 < j; j--) {

            if((i+2 > row || j+1 > colum) 
            && (i+1 > row || j+2 > colum) 
            && (i-1 < 1 || j+2 > colum) 
            && (i-2 < 1 || j+1 > colum)
            && (i-2 < 1 || j-1 < 1)
            && (i-1 < 1 || j-2 < 1) 
            && (i+1 > row || j-2 < 1) 
            && (i+2 > row || j-1 < 1)) {

                cout << i << " " << j << "\n";
                return;
            }
        }
    }

    cout << row << " " << colum << "\n";
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tests;
    int row, colum;

    cin >> tests;

    for(int i = 0; i < tests; i++) {

        cin >> row >> colum;
        checkIfTrapped(row, colum);    
    }

    return 0;
}