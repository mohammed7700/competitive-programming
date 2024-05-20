#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void doesIntersect() {

    int a,b,c,d;

    cin>>a;cin>>b;cin>>c;cin>>d;

    int pos = (a + 1)%13;

    bool foundOnce = false;
    
    if(pos != b) {

        for (int j = 0; j < 12; j++)
        {
            if((pos+j)%13 == b && !foundOnce){
                cout << "NO"<< endl;return;
                j =12;
            }
            else if((pos+j)%13 == b && foundOnce){
                cout << "YES"<< endl;return;
                j =12;
            }
            else if( ((pos+j)%13 == c) || ((pos+j)%13 == d)){
                
                if(foundOnce){
                    cout << "NO"<< endl;return;
                    j =12;
                }

                foundOnce = true;
            }
        }
    } else {
        cout << "NO"<< endl;
    }
}


void run() {

    int t; 
    cin >> t;



    for (int i = 0; i < t; i++)
    {
        doesIntersect();
    }
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
