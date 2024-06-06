#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t; 
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];

        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for(int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int m;
        cin >> m;
        vector<int> d(m);

        for(int j = 0; j < m; j++)
        {
            cin >> d[j];
        }

        int diff = 0;

        bool success = true;

        for (int j = 0; j < n; ++j) {
            if (a[j] != b[j]) {
                diff ++;
                auto it = std::find(d.begin(), d.end(), b[j]);
                if (it != d.end()) {
                    // If b[j] is found in d, remove it
                    d.erase(it);
                } else {
                    // If b[j] is not found, print NO and exit the loop
                    success = false;
                    break;
                }
            }
        }

        //cout << diff << ": ";

        if(diff > m || !success || d.size() > 0) {
            cout << "NO" << endl;
        } else if(success) {
            cout << "YES" << endl;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}