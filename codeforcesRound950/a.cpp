#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t; cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n; 
        cin >> m;
        string v;
        cin >> v;

        std::vector<std::pair<char, int>> freq = {
            {'A', 0},
            {'B', 0},
            {'C', 0},
            {'D', 0},
            {'E', 0},
            {'F', 0},
            {'G', 0}
        };


        for (int j = 0; j < n; j++)
        {
            for(auto& c : freq)
            {
                if (v[j] == c.first)
                {
                    c.second++;
                    break;
                }
            }
        }

        int ans = 0;

        for (const auto& p : freq) {
            ans = ans + (abs(p.second - m)*((p.second - m)<0));
        }

        cout << ans << endl;
    }

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
