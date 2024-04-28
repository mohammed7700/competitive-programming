#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {

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

    ll m;ll n;

    cin >> n; cin >> m;

    string ans = "1";

    ll nNum = 0;
    ll mNum = 0;

    ll i = 0;
    ll j = 0;

    while(i < n || j < m) {

        if(i < n) {
            ans = ans+"1";
            i++;
        }
    }


    //ll ans = gcd(nNum, mNum);

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}