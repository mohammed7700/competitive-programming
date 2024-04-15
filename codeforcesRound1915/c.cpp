#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll tests,numBuckets;
    cin >> tests;

    for(int i = 0; i < tests; i++) {

        cin >> numBuckets;
        ll sum=0;
        int tmp;

        for(int j = 0; j < numBuckets; j++) {
            cin >> tmp;
            sum += tmp;
        }

        long long square = sqrt(sum);

        if(square*square == sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
