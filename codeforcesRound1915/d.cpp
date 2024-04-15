#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int tests, lenWord;

    cin >> tests;

    for(int i = 0; i < tests; i++) {

        cin >> lenWord;

        string word;

        cin >> word;

        for(int j = 0; j < lenWord; j++) {

            if(lenWord-j > 3) {

                if(word[j+3] == 'a' || word[j+3] == 'e'){
                    cout << word[j] << word[j+1] << ".";
                    j += 1;
                } else {
                    cout << word[j] << word[j+1] << word[j+2] << ".";
                    j += 2;
                }

            } else {

                cout << word.substr(j, lenWord) << endl;
                j = lenWord;
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
