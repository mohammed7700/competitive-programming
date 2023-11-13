#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll n;

    cin >> n;

    ll input[n];

    for(int i = 0; i < n; i++) {

        cin >> input[i];
    }

    ll outPutIndex[n];

    int indexSeqLen = 0, index = 0, curLen, curIndex;
    for(int i = 0; i < n; i++) {
        curLen = 1;
        curIndex = i;

        for(int j = i; j < n; j++) {

            if(input[curIndex]+1 == input[j]) {
                curLen++;
                curIndex=j;
            }
        }

        if(curLen > indexSeqLen) {
            indexSeqLen = curLen;
            index = i;
        }
    }

    cout << indexSeqLen << endl;

    for(int i = index; i < n; i=n) {

        for(int j = i; j < n; j++) {

            if(input[i]+1 == input[j]) {
                cout << i+1 << " ";
                i=j;
            }
        }

        cout << i+1;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}

