#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int dfsHelper(int x, int y, char** matrix, bool** visited, int n, int m) {

    if(x < 0 || x >= n || y < 0 || y >= m || matrix[x][y] != '.' || visited[x][y]) {

        return 0;
    }

    visited[x][y] = true;
    int size = 1;

    size += (x == n) ? 0 : dfsHelper(x+1, y, matrix, visited, n, m);
    size += (x == 0) ? 0 : dfsHelper(x-1, y, matrix, visited, n, m);
    size += (y == m) ? 0 : dfsHelper(x, y+1, matrix, visited, n, m);
    size += (y == 0) ? 0 : dfsHelper(x, y-1, matrix, visited, n, m);

    return size;
}

int dfs(char** matrix, int n, int m, int x, int y) {

    bool** visited = new bool*[n];

    for(int i = 0; i < n; i++) {

        visited[i] = new bool[m];
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            visited[i][j] = false;
        }
    }

    return dfsHelper(x, y, matrix, visited, n, m);
}

void run() {

    int n,m, count;

    cin >> n >> m;

    char** inMatrix = new char*[n];
    char** outMatrix = new char*[n];


    for(int i = 0; i < n; i++) {

        inMatrix[i] = new char[m];
        outMatrix[i] = new char[m];
    }


    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            cin >> inMatrix[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(inMatrix[i][j] == '*') {

                inMatrix[i][j] = '.';
                inMatrix[i][j] = dfs(inMatrix, n, m, i, j)+48;
            }
        }
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            cout << inMatrix[i][j];
        }

        cout << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}