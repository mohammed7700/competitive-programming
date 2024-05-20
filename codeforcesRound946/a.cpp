#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {
    int t;cin>>t;

    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x;cin>>y;

        int minScreensY = (int)ceil(((double)y)/2);
        int emptyScreens = minScreensY*15-y*4;

        cout << ceil((((double)emptyScreens-(double)x)*(-1))/15)*(0>(emptyScreens-x)) + minScreensY << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
