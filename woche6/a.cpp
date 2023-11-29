#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int n, m;

    cin >> n >> m;

    //n = 8; n = 4;

    int points[n]; //= {1,1,1,0,0,1,0,1};


    for( int i = 0; i < n; i++) {
        char tmp;
        cin >> tmp;
        points[i] = tmp-'0';
    }

    int countJump = 0, currIndex = 0;
    int jump = m;
    int tmp;

    for(int i = 0; i < n; i++) {

        if(currIndex+jump > n-1) {
            cout << ++countJump;
            return;
            jump += tmp;
        }

        if(points[currIndex+jump] == 1) {

            if(currIndex+jump == n-1) {
                cout << ++countJump;
                return;
            }

            currIndex = currIndex+jump;
            jump = m;
            countJump++;
        } else {

            jump--;
        }
    }

    cout << -1;
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}