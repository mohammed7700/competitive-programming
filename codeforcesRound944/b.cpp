#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void allCharsEqual(string s){

    cin >> s;

    char prev = s[0];

    for (int j = 1; j < s.length(); j++)
    {

        if(prev != s[j]){
            s[j-1] = s[j];
            s[j] = prev;
            cout << "YES"<< endl << s << endl;return;
        }
        
        prev = s[j];
    } 

    cout<<"NO"<< endl;
}

void run() {

    int t;cin>>t;
    string s;

    for (int i = 0; i < t; i++)
    {
        allCharsEqual(s);
    }
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}