#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll n;

    cin >> n;

    int input[n];

    for(int i = 0; i < n; i++) {

        cin >> input[i];
    }

    int minDist = input[0]-input[1];
    uint32_t temp = minDist >> 31;     
    minDist ^= temp;                   
    minDist += temp & 1; 
    int pair[2]= {0,1}, curDif;

    for(int i = 0; i < n; i++) {

        curDif = input[i]-input[i+1];
        temp = curDif >> 31;
        curDif ^= temp;                   
        curDif += temp & 1; 

        if(minDist > curDif) {

            minDist = curDif;
            pair[0] = i; pair[1] = i+1;
        }
    }

    
    curDif = input[0]-input[n-1];
    temp = curDif >> 31;
    curDif ^= temp;                   
    curDif += temp & 1; 

    if(minDist > curDif) {

        minDist = curDif;
        pair[0] = n-1; pair[1] = 0;
    }

    

    cout << pair[0]+1 << " " << pair[1]+1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}