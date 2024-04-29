#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    string word1, word2;

    cin >> word1; cin >> word2;
    
    if(word1 == word2) {
        cout << -1; 
    } else {
        cout << max(word1.size(), word2.size());
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}