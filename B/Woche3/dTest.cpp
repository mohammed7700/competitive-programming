#include <bits/stdc++.h>

using namespace std;

using ll = long long;

//1 1 . 1 1
//1 0 - 1 0

void run() {

    ll n;
    cin >> n;

    ll largPrime = (ll)1e9+7;

    ll matrix[2][2];
    matrix[0][0]=1;
    matrix[0][1]=1;
    matrix[1][0]=1;
    matrix[1][1]=0;

    ll nfib[2][2];
    nfib[0][0]=1;
    nfib[0][1]=1;
    nfib[1][0]=1;
    nfib[1][1]=0;

    ll tmp[2][2];

    if(n==0){cout<<0;return;}

    if(n<50){
        for (int i = 1; i < n; i++)
        {
            tmp[0][0] = ( ( nfib[0][0]%largPrime * matrix[0][0]%largPrime )%largPrime + ( nfib[0][1]%largPrime * matrix[1][0]%largPrime )%largPrime )%largPrime;
            tmp[0][1] = ( ( nfib[0][0]%largPrime * matrix[0][1]%largPrime )%largPrime + ( nfib[0][1]%largPrime * matrix[1][1]%largPrime )%largPrime )%largPrime;
            tmp[1][0] = ( ( nfib[1][0]%largPrime * matrix[0][0]%largPrime )%largPrime + ( nfib[1][1]%largPrime * matrix[1][0]%largPrime )%largPrime )%largPrime;
            tmp[1][1] = ( ( nfib[1][0]%largPrime * matrix[0][1]%largPrime )%largPrime + ( nfib[1][1]%largPrime * matrix[1][1]%largPrime )%largPrime )%largPrime;

            nfib[0][1] = tmp[0][1];
            nfib[1][0] = tmp[1][0];
            nfib[1][1] = tmp[1][1];
            nfib[0][0] = tmp[0][0];
        }

        cout << nfib[0][1];return;
    }

    /*for (int i = 1; i < n/2 + n%2==1; i++)
    {
        tmp[0][0] = ( ( nfib[0][0]%largPrime * matrix[0][0]%largPrime )%largPrime + ( nfib[0][1]%largPrime * matrix[1][0]%largPrime )%largPrime )%largPrime;
        tmp[0][1] = ( ( nfib[0][0]%largPrime * matrix[0][1]%largPrime )%largPrime + ( nfib[0][1]%largPrime * matrix[1][1]%largPrime )%largPrime )%largPrime;
        tmp[1][0] = ( ( nfib[1][0]%largPrime * matrix[0][0]%largPrime )%largPrime + ( nfib[1][1]%largPrime * matrix[1][0]%largPrime )%largPrime )%largPrime;
        tmp[1][1] = ( ( nfib[1][0]%largPrime * matrix[0][1]%largPrime )%largPrime + ( nfib[1][1]%largPrime * matrix[1][1]%largPrime )%largPrime )%largPrime;

        nfib[0][1] = tmp[0][1];
        nfib[1][0] = tmp[1][0];
        nfib[1][1] = tmp[1][1];
        nfib[0][0] = tmp[0][0];
    }*/

    int i = 0; 

    //cout << n/2+(n%2==1) << "\n";

    while (pow(2, i) < log2(n/2) )
    {
        tmp[0][0] = ( ( nfib[0][0]%largPrime * nfib[0][0]%largPrime )%largPrime + ( nfib[0][1]%largPrime * nfib[1][0]%largPrime )%largPrime )%largPrime;
        tmp[0][1] = ( ( nfib[0][0]%largPrime * nfib[0][1]%largPrime )%largPrime + ( nfib[0][1]%largPrime * nfib[1][1]%largPrime )%largPrime )%largPrime;
        tmp[1][0] = ( ( nfib[1][0]%largPrime * nfib[0][0]%largPrime )%largPrime + ( nfib[1][1]%largPrime * nfib[1][0]%largPrime )%largPrime )%largPrime;
        tmp[1][1] = ( ( nfib[1][0]%largPrime * nfib[0][1]%largPrime )%largPrime + ( nfib[1][1]%largPrime * nfib[1][1]%largPrime )%largPrime )%largPrime;

        nfib[0][1] = tmp[0][1];
        nfib[1][0] = tmp[1][0];
        nfib[1][1] = tmp[1][1];
        nfib[0][0] = tmp[0][0];

        i++;
    }

    for (int j = 0; j < n/2 -pow(2,i); j++)
    {
        tmp[0][0] = ( ( nfib[0][0]%largPrime * matrix[0][0]%largPrime )%largPrime + ( nfib[0][1]%largPrime * matrix[1][0]%largPrime )%largPrime )%largPrime;
        tmp[0][1] = ( ( nfib[0][0]%largPrime * matrix[0][1]%largPrime )%largPrime + ( nfib[0][1]%largPrime * matrix[1][1]%largPrime )%largPrime )%largPrime;
        tmp[1][0] = ( ( nfib[1][0]%largPrime * matrix[0][0]%largPrime )%largPrime + ( nfib[1][1]%largPrime * matrix[1][0]%largPrime )%largPrime )%largPrime;
        tmp[1][1] = ( ( nfib[1][0]%largPrime * matrix[0][1]%largPrime )%largPrime + ( nfib[1][1]%largPrime * matrix[1][1]%largPrime )%largPrime )%largPrime;

        nfib[0][1] = tmp[0][1];
        nfib[1][0] = tmp[1][0];
        nfib[1][1] = tmp[1][1];
        nfib[0][0] = tmp[0][0];
    }
    
    //cout << nfib[0][1];return;


    ll f_n;

    if(n%2==0) {
        f_n = ( ( nfib[0][1] + (nfib[1][1]*2)%largPrime )%largPrime * nfib[0][1] ) %largPrime;
    } else {
        f_n = ( ( nfib[0][1]*nfib[0][1])%largPrime + (nfib[1][1]*nfib[1][1])%largPrime )%largPrime;
    }

    //cout << nfib[0][0] << " " << nfib[0][1] << "\n" << nfib[1][0] << " " << nfib[1][1] << "\n";
    cout << f_n;//nfib[0][1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}