#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 0; i < n; i++)
        for (int k = 0; k <= i; k++)
            if (s.substr(0, k) == s.substr(i-k+1, k))
                pi[i] = k;
    return pi;
}


void run() {

    string s;
    cin>> s;

    vector<int> prefixsufix = prefix_function(s);
    //cout << s.length() << " " << prefixsufix[s.length()-1];

    /*for (int i = 0; i < s.length(); i++)
    {
        cout << prefixsufix[i] << " ";
    }*/
    
    if(prefixsufix[s.length()-1] == 0) {
        cout << "Just a legend";
        return;
    }

    for (int i = 0; i < s.length()-1; i++)
    {
        if(prefixsufix[s.length()-1] == prefixsufix[i]){
            for (int j = 0; j < prefixsufix[s.length()-1]; j++)
            {
                cout << s[j];
            }
            return;
        }
    }

    if(prefixsufix[ prefixsufix[s.length()-1]-1 ] > 0) {
        for (int j = 0; j < prefixsufix[ prefixsufix[s.length()-1]]; j++)
        {
            cout << s[j];
        }
        return;
    } else {
        cout << "Just a legend";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}