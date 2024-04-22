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

    int tprime;

    vector<bool> gestrichen(pow(10,5), false);
    vector<int> primes(pow(10,5), -1);

    siebDesEratosthenes(gestrichen, primes, pow(10,5));

    for (int  j = 0; j < n; j++)
    {
        cin >> tprime;

        bool isTPrime= false;

        for (int i = 0; -1 != primes[i]; i++)
        {
            if(pow(primes[i],2) == tprime) {
                cout << "YES" << endl;
                isTPrime = true;
            }
        }

        if(!isTPrime) {
            cout << "NO" << endl;
        }
    }


    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}