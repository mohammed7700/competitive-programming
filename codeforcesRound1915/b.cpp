#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    
    int tests;
    cin >> tests;

    for(int i = 0; i < tests; i++) {

        char square[3][3];

        for(int j = 0; j < 3; j++) {

            for(int l = 0; l < 3; l++) {

                cin >> square[j][l];
            }
        }


        for(int j = 0; j < 3; j++) {

            int sumRow = square[j][0]+square[j][1]+square[j][2];

            if( (sumRow) == 196 ) {
                cout << "A\n";
            }

            if( (sumRow) == 194 ) {
                cout << "C\n" ;
            }

            if( (sumRow) == 195 ) {
                cout << "B\n";
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
