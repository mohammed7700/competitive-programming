#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {
        //red n * 2
        //blue n - 1

    ll count=0, n, m;cin>>n>>m;

    if(m < n) {
        cout << n-m;return;
    }

    while(n < ceil(m/2)){n *=2;count++;}

    //while(n != m){n--;count++;}

    if( (n - ceil(m/2) ) < (n*2 - m ) ){ 

        while(ceil(m/2) != n){n--;count++;}
        count++;
    } else {
        count += n*2-m+1;
    }

    cout << count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}