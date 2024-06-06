#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Size of the array
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Original array
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i]; // Found array
        }

        int m;
        cin >> m; // Number of modification operations

        vector<int> d(m);
        unordered_map<int, int> d_count;
        for (int i = 0; i < m; ++i) {
            cin >> d[i]; // Modifications array
            d_count[d[i]]++; // Count occurrences of each modification value
        }

        // Track if it's possible to transform array a to array b
        bool possible = true;

        // Needed values for transformations that are delayed
        unordered_map<int, int> needed;

        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                needed[b[i]]++;
            }
        }

        for (const auto& mod : d) {
            if (needed[mod] > 0) {
                needed[mod]--;
                if (needed[mod] == 0) {
                    needed.erase(mod);
                }
            } else {
                d_count[mod]--;
            }
        }

        for (const auto& need : needed) {
            if (d_count[need.first] < need.second) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
