#include <bits/stdc++.h>

using namespace std;

using ll = long long;

typedef vector<vector<ll>> Matrix;

Matrix matrix2_x_2_Multiplication(const Matrix& A, const Matrix& B) {
    ll largePrime = (ll)1e9+7;
    Matrix result(A.size(), vector<ll>(2, 0));
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = ( ( A[i][0]%largePrime * B[0][j]%largePrime )%largePrime + ( A[i][1]%largePrime * B[1][j]%largePrime )%largePrime )%largePrime;
        }
        
    }
    
    return result;
}

Matrix matrixPower(const Matrix& M, ll n) {
    if (n == 1) return M;
    if (n % 2 == 0) {
        Matrix halfPower = matrixPower(M, n / 2);
        return matrix2_x_2_Multiplication(halfPower, halfPower);
    } else {
        Matrix halfPower = matrixPower(M, (n - 1) / 2);
        Matrix temp = matrix2_x_2_Multiplication(halfPower, halfPower);
        return matrix2_x_2_Multiplication(temp, M);
    }
}

ll fibonacci(ll n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    Matrix baseMatrix = {{1, 1}, {1, 0}};
    Matrix resultMatrix = matrixPower(baseMatrix, n - 1);
    return resultMatrix[0][0];
}

void run() {
    ll n;
    cin >> n;
    ll result = fibonacci(n);
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}