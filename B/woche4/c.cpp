#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int n, k;
    cin >> n; cin >> k;

    string s;

    cin >> s;

    int maximum = 0;


    for(char letter : {'a', 'b'}) {

        int l = 0;
        int changes = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == letter){ changes++; }

            while(changes > k) {
                if( s[l++] == letter ) { changes--; }

            }

            maximum = max(maximum, i - l + 1);
        }
    }
    cout << maximum;   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}