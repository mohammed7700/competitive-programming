
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void rowRead(char* row, ll n) {

    for(int i = 0; i < n-1; i++) {
        cin >> row[i];
    }
}

void copieRows(char* row1, char* row2, ll n) {

    for(int i = 0; i < n-1; i++) {
        row1[i] = row2[i];
    }
}

void run() {

    ll n, counter = 0, countRows = 2;
    bool check = false, checkRows = true;
    cin >> n;
    char row1[n], row2[n];


    if( n == 1 ) {
        cout << "YES";
        return;
    }


    
    for(int i = 0; i < n; i++) {

        if(check = false) {
            
            rowRead(row1, n);
            rowRead(row2, n);
            check =true;
            i++;
        }

        for(int j = 0; j < n; j++){

            cout << row1[j] << endl;
            
            if (row1[j] == 'o'){
                if(row2[j] == 'o'){
                    counter++;
                }
                if(j+1 <n){
                    if(row1[j+1] == 'o'){
                        counter++;
                    }
                }
            }
        }

        if(++countRows <= n) {

            checkRows = false;
        }

        if(checkRows) {

            copieRows(row1, row2, n);
            rowRead(row2, n);
        }
    }
    

    if(counter%2 == 0) {
        cout << "anzahl " << counter << endl;
        cout << "YES";
        return;
    }
    cout << "anzahl " << counter << endl;
    cout << "NO";
}



signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    run();
    return 0;
}