#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t, x1,x2,y1,y2,z1,z2;
    cin >> t;

    for(int i = 0; i < t; i++) {

        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        int xDist = abs(x1 - y1);
        int yDist = abs(x2 - y2);

        if( (x1 == y1 && x1 == z1) && ( (x2 > z2 && y2 < z2) || (x2 < z2 && y2 > z2) ) ) {
            yDist +=2;
        }

        if( (x2 == y2 && x2 == z2) && ( (x1 > z1 && y1 < z1) || (x1 < z1 && y1 > z1) ) ) {
            xDist +=2;
        }

        cout << yDist+xDist << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}