#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {
    int t;cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n; cin>>n;
        string s; cin>>s;

        map<char, int> directionMap = {
            {'N', 0},
            {'W', 0},
            {'S', 0},
            {'E', 0}
        };

        for (int i = 0; i < n; i++)
        {
            directionMap[s[i]] = directionMap[s[i]]+1;
        }

        /*std::cout << "Contents of std::unordered_map:" << i << std::endl;
        for (const auto& pair : directionMap) {
            std::cout << pair.first << " => " << pair.second << std::endl;
        }*/

        if( abs(directionMap['N']-directionMap['S'])%2!=0 || abs(directionMap['W']-directionMap['E'])%2!=0){
            cout << "NO" << endl;
        } else {
            cout << "RH" << endl;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}