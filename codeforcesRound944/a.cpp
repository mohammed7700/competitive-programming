#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t,x,y;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>x;cin>>y;

        cout << min(x,y) << " " << max(x,y) << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
