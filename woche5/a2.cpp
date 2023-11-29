#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run () {

    int n;
    cin >> n;

    int soldiers[n];

    for(int i = 0; i<n; i++) {

        cin >> soldiers[i];
    }

    int indexUnits[2] = {0,1};
    int tmpDist;
    int dist = (soldiers[indexUnits[0]]-soldiers[indexUnits[1]]);
    uint32_t temp =  dist >> 31;
    dist ^= temp;
    dist += temp & 1;
    for(int i = 1; i<n; i++) {

        tmpDist = (soldiers[i]-soldiers[(i+1)%n]);
        temp =  tmpDist >> 31;
        tmpDist ^= temp;
        tmpDist += temp & 1;
        if(tmpDist < dist) {

            dist = tmpDist;
            indexUnits[0] = i;
            indexUnits[1] = (i+1)%n;
        }
    }

    cout << indexUnits[0]+1 << " " << indexUnits[1]+1;
}   

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}