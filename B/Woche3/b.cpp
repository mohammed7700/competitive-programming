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

    int n;
    cin >> n;
    vector<int> ans;
    ll t = 1;
    for (int i = 1; i <= n; i++) {
        if (gcd(i, n) == 1) {
            ans.push_back(i);
            t = t * i % n;
        }
    }
    if (t != 1) ans.pop_back();
    cout << ans.size() << endl;
    for (int i: ans) cout << i << " ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}