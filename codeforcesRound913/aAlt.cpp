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

        for(char i = 'a'; i <= 'h'; i++) {

            if(i != letter) {
                cout << i << digit << endl;
            }
        }

        for(char i = '1'; i <= '8'; i++) {

            if(i != digit) {
                cout << letter << i << endl;
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}