#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int fourPoints[4][2];

        for (int j = 0; j < 4; j++)
        {
            cin >> fourPoints[j][0];
            cin >> fourPoints[j][1];
        }

        int side1, side2;

        for (int j = 1; j < 4; j++)
        {
            if(fourPoints[0][0] == fourPoints[j][0]) {

                side1 = abs( fourPoints[0][1] - fourPoints[j][1] );
                j=3;
            }
        }
        

        for (int j = 1; j < 4; j++)
        {
            if(fourPoints[0][1] == fourPoints[j][1]) {

                side2 = abs( fourPoints[0][0] - fourPoints[j][0] );
                j=4;
            }
        }

        cout << side1*side2 << endl;
    }
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
