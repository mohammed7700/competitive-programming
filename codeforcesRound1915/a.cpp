#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int tests,a, b, c;
    cin >> tests;
    for( int i = 0; i < tests; i++ ) {
        cin >> a >> b >> c;
        int out = a == b ? ( c ) : ( a == c ? b : a );
        cout << out << "\n";
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
