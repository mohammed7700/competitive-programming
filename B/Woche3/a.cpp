#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int n, m;
    int res = 1;
    int mod = 998244353;
    cin >> n >> m;
    for (int i = 1; i <= n + m; i++) {
    res = res * 2 % mod;
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}