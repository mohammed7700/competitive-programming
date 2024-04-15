#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t; 
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;cin>>n;
        string boxes;
        cin >> boxes;
        string expect;
        cin >> expect;

        int countCats =0;
        int countCatsExpect =0;


        for (int j = 0; j < n; j++)
        {
            if(expect[j] == '1')
                countCatsExpect++;
            if(boxes[j] == '1') 
                countCats++;
        }

        int diff = countCatsExpect - countCats;
        int missplaced=0;

        for (int j = 0; j < n; j++)
        {
            if(boxes[j] != expect[j]) {

                missplaced++;
            }
        }

        cout << abs(diff) +((missplaced-abs(diff))/2) << endl;

        // 101011 boxes diff -1 missmatch 3
        // 101100 expect 
        
    }
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
