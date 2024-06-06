#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t; 
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n,f,k;

        cin >> n;cin >> f;cin >> k;

        int a[n];

        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        

        int favCub = a[f-1];

        sort(a, a+n);
        reverse(a, a+n);

        if(n == 1 || n == k) {
            cout << "YES" << endl;
        }
        else if(favCub > a[k-1] || favCub == a[k-1] && favCub != a[k])
        {
            cout << "YES" << endl;
        }
        else if(favCub == a[k-1] && favCub == a[k]){
            cout << "MAYBE" << endl;
        }
        else if(favCub < a[k-1])
        {
            cout << "NO" << endl;
        }
    }
    


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}