#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int countDistinct(char arr[], int n)
{
    int res = 1;
 
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        if (i == j)
            res++;
    }
    return res;
}

void run() {

    int cases;
    char bulbs[4];
    cin >> cases;


    for(int i = 0; i < cases; i++) {

        int colorGroups=1;

        //read the four values
        for(int i = 0; i < 4; i++) {cin>>bulbs[i];}

        //determin distinct groups 
        colorGroups = countDistinct(bulbs, 4);

        //based on groups print min ops
        if(colorGroups == 1) {
            cout << -1<<endl;
        }

        if(colorGroups == 2) {

            int color1 = bulbs[0], times=0;

            for(int i = 1; i < 4; i++) {
                if(color1 == bulbs[i])
                    times++;
            }

            if(times==2){
                cout << 6<<endl;
            }else {
                cout << 4<<endl;
            }
        }

        if(colorGroups > 2) {
            cout << 4<<endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
