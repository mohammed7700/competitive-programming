#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int gcd(ll a, ll b) {

    int x;

    if(a == 0) {
        return b;
    }

    while(b != 0) {
        x = a%b;
        a = b;
        b = x;
    }

    return a;
}

void run() {

    ll t, n;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n;

        for(int a = n-3, b = 2; b < n; a--,b++) {

            int c = gcd(a, b);

            if( (a + b + c) == n && (a != b) && (a != c) && (b != c)) {
                cout << a << " " << b << " " << c << "\n";
                a =n;
                b=n;
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