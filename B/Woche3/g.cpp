#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {
    int t;cin>>t;
    int n;cin>>n;


    for (int i = 0; i < t; i++)
    {
        vector<int> s(n);
        
        for (int j = 0; j < n; j++)
        {
            cin >> s[j];
        }
        
        vector<int> sorted(n);

        copy(s.begin(), s.end(), sorted.begin());

        /*for (int j = 0; j < n; j++)
        {
            sorted[j] = s[j];
        }*/
             
        sort(sorted.begin(), sorted.end());

        bool equal = true;

        for (int j = 0; j < n; j++)
        {
            equal = equal && sorted[j] == s[j];
        }

        if( equal ) {

            cout << 0 << "\n";
        } else {

            vector<int> indexies;

            for (int j = 0; j < n; j++)
            {
                if(sorted[j] != s[j]) {
                    indexies.push_back(j);
                }
            }
            cout << 1 << "\n";
            cout << indexies.size() << " ";

            for (int j = 0; j < indexies.size(); j++)
            {
                cout << indexies[j] << " ";
            }

            cout << "\n";
        }
        
    }
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}