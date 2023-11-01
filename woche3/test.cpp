#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void readMatrix(char** matrix, ll n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(char** matrix, ll n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void countAdjacentOs(char** matrix, int n) {
    int count = 0;

    for (int i = 1; i < n - 1; i++) {
        if ((matrix[0][i] == 'o' && matrix[0][i+1] == 'o')) {
            count++;
        }
        if ((matrix[0][i] == 'o' && matrix[1][i] == 'o')) {
            count++;
        }
    }
    

    if (count % 2 != 0) {
        cout << "NO";return;
    }
    count = 0;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if ((matrix[i][j] == 'o' && matrix[i + 1][j] == 'o')) {
                count++;
            }
            if ((matrix[i][j] == 'o' && matrix[i][j + 1] == 'o')) {
                count++;
            }
            if ((matrix[i][j] == 'o' && matrix[i - 1][j] == 'o')) {
                count++;
            }
            if ((matrix[i][j] == 'o' && matrix[i][j - 1] == 'o')) {
                count++;
            }   
        }
    

        if (count % 2 != 0) {
            cout << "NO";return;
        }
        count=0;
    }


    for(int i = 0; i < n - 1; i++) {
        if (matrix[n - 1][i] == 'o' && matrix[n - 1][i + 1] == 'o') {
            count++;
        }
        if (matrix[n - 1][i] == 'o' && matrix[n - 2][i] == 'o') {
            count++;
        }
    }

    if (count % 2 != 0) {
        cout << "NO";return;
    }
    count=0;

    for(int i = 0; i < n -1; i++) { 
        if (matrix[i][n - 1] == 'o' && matrix[i + 1][n - 1] == 'o') {
            count++;
        }
        if (matrix[i][n - 1] == 'o' && matrix[i][n - 2] == 'o') {
            count++;
        }
    }

    if (count % 2 != 0) {
        cout << "NO";return;
    }
    count=0;

    cout << "YES";return;
}


void run() {
    ll n;
    cin >> n;

    if(n == 1) {
        cout << "YES";
        return;
    } 

    char** matrix = new char*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new char[n];
    }

    readMatrix(matrix, n);
    // printMatrix(matrix, n);
    countAdjacentOs(matrix, n);
    // cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    run();
    return 0;
}