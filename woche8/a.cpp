#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {
    
    int h1, h2, climb, fall;
    cin >> h1 >> h2 >> climb >> fall;
    int days=0;

    // if( (climb*8) >= (h2-h1) ) {cout<<0;return;}

    if(fall >= climb && (climb*8) < (h2-h1)) {cout<<-1;return;}

    // h1 += climb*8-fall*12;

    for(int i = h1; i < h2; i-=fall*12-climb*4) {

        i += climb*8;

        if(i >= h2){
            cout<<days;return;
        }
        // i += (climb-fall)*12;
        days++;
    }

    cout<<days;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}


