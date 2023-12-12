#include <bits/stdc++.h>

using namespace std;

using ll = long long;


void run() {
    char letter, digit;
    int n;
    cin>>n;
    cin>>letter>>digit;

    // char digit[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    // char letter[] = {'1', '2', '3', '4', '5', '6', '7', '8'};

    for(int i = 0; i<n; i++) {

        for(char i = letter+1; i <= 'h'; i++) {

            cout << i << digit << endl;
        }

        for(char i = letter-1; i >= 'a'; i--) {

            cout << i << digit << endl;
        }

        for(char i = digit+1; i <= '8'; i++) {

            cout << letter << i << endl;
        }

        for(char i = digit-1; i >= '1'; i--) {

            cout << letter << i << endl;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}