#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void siebDesEratosthenes(vector<bool>& gestrichen, vector<int>& primes, int length){


    for(int i = 2; i*i < length; i++) {
        if(!gestrichen[i]) {

            for(int l = i*i; l < length; l += i) {
                gestrichen[l] = 1;
            }
        }
    }

    int j =0;

    for (int i = 2; i < length; i++)
    {
        if(!gestrichen[i])
            primes[j++]=i;
    }
    
}


void run() {

    int n; 
    cin>>n;

    if(n-2<2) {
        cout << -1;return;
    }

    for (int i = 3; i*i <= n-2; i++)
    {
        if( (n-2)%i == 0 ) {
            cout << -1;return;
        }
    }
    
    cout << 2 << " " << n-2;
    /*vector<bool> gestrichen(n, false);
    vector<int> primes(n, -1);

    siebDesEratosthenes(gestrichen, primes, n);
    

    for(int i = 0; -1 != primes[i]; i++) {

        for(int j = i; -1 != primes[j]; j++) {

            if(primes[i] + primes[j] == n){
                cout << primes[i] << " " << primes[j];
                return;
            }
        }
    }*/
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}