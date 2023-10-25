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

int countAdjacentOs(char** matrix, int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 'o' && matrix[i + 1][j] == 'o') {
                count++;
            }
        }
    }

    return count;
}

void run() {
    ll n;
    cin >> n;
    char** matrix = new char*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new char[n];
    }

    readMatrix(matrix, n);
    int count = countAdjacentOs(matrix, n);

    if (count % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    run();
    return 0;
}