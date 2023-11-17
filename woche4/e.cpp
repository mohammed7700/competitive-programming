#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll n, k;

    cin >> n, k;

    ll input[n];
    // ll tmpOutPutIndex[n];
    // ll outPutIndex[n];

    for(int i = 0; i < n; i++) {

        cin >> input[i];
    }


    std::unordered_map<ll, ll> temp1;
    std::unordered_map<ll, ll> temp2;
    ll result = 0;

    for (int j = 0; j < n; j++) {
        ll current = input[j];
        result += temp2[current];
        ll next = current * k;
        temp2[next] = temp2[next] + temp1[current];
        temp1[next] = temp1[next] + 1;
    }

    cout << result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}