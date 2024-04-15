#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll count=0, n, m;cin>>n>>m;

    string balls;

    cin >> balls;


    int countColors = 1;
    char currBall = balls[0];
    for (ll i = 1; i < balls.size(); i++)
    {
        if(currBall != balls[i]) {

            currBall = balls[i];
            countColors++;
        }
    }
    
    if(countColors % 2 == 0) {
        cout << "0";
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}