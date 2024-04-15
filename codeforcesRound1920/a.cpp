#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    // k => x , k =< x, k =/= k
    
    int tests, leftBorder, rightBorder;


    cin >> tests;

    for(int i = 0; i < tests; i++) {
        int constraints; 
        cin >> constraints;
        vector<int> match;
        leftBorder=1; 
        rightBorder=INT_MAX;

        for(int j = 0; j < constraints; j++) {

            int constrain,x;
            cin>>constrain>>x;

            if(constrain == 1) {

                if(x > leftBorder)
                    leftBorder=x;
                continue;
            }

            if(constrain == 2) {

                if(x < rightBorder)
                    rightBorder=x;
                continue;
            }

            if(constrain == 3) {

                match.push_back(x);
            }
        }

        long counter = std::count_if(match.begin(), match.end(), [leftBorder, rightBorder](int num) {
            return num >= leftBorder && num <= rightBorder;
        });

        if(leftBorder > rightBorder){
            cout << 0 << endl;
            continue;
        }

        cout << (rightBorder - leftBorder) - counter+1 << endl;
    } 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}