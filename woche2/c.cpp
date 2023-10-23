#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int ggT(int num1, int num2) {

    if( num2 == 0) 
        return num1;
    
    return ggT(num2, num1%num2);
}

int kgV(int num1, int num2)
{
   return (num1*num2)/ggT(num1, num2);
}

void run() {

    ll anzCases;
    ll n, k, mult;
    cin >> anzCases;

    for(ll i = 0; i < anzCases; i++) {

        mult = 1;

        cin >> n >> k;
        //kgv = kgV(k, n);

        //cout << kgv << " von n: " << n << " und k: " << k << "\n";
        if(n > k*mult) 
            mult = ( (n/k) + ((n%k) != 0) );

        mult *= k;
        cout << ( (mult/n) + ((mult % n) != 0) ) << "\n";
    }
}

signed main() {
    // k : n
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    run();
    return 0;
}