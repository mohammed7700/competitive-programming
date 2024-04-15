#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll n;

    cin >> n;

    ll input[n];
    ll tmpOutPutIndex[n];
    ll outPutIndex[n];

    for(int i = 0; i < n; i++) {

        cin >> input[i];
        outPutIndex[i] = -1;
        tmpOutPutIndex[i] =    -1;
    }

    int indexSeqLen = 0, index = 0, curLen, curIndex;
    for(int i = 0; i < n; i++) {
        curLen = 1;
        curIndex = i;
        tmpOutPutIndex[curLen-1] = i;

        for(int j = 0; tmpOutPutIndex[i]+1 == tmpOutPutIndex[i+1]; i++)
            i++;

        for(int j = i; j < n; j++) {

            if(input[curIndex]+1 == input[j]) {
                tmpOutPutIndex[++curLen-1] = j;
                curIndex=j;
            }
        }

        if(curLen > indexSeqLen) {
            indexSeqLen = curLen;
            index = i;
            for(int i = 0; i < n; i++) {
                outPutIndex[i] = tmpOutPutIndex[i]; 
            }
        }
    }

    cout << indexSeqLen << endl;

    for(int i = 0; outPutIndex[i] != -1 && i < n; i++) {

        // for(int j = i; j < n; j++) {

        //     if(input[i]+1 == input[j]) {
        //         cout << i+1 << " ";
        //         i=j;
        //     }
        // }

        cout << outPutIndex[i]+1 << " ";
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}

