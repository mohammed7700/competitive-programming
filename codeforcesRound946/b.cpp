#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {
    int t;cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n;cin>>n;
        string b;cin>>b; 
        set<char> s;

        map<char, char> decoder;

        for (int j = 0; j < n; j++)
        {
            s.insert(b[j]);
        }

        auto frontIter = s.begin();
        auto backIter = s.rbegin();

        while (distance(frontIter, s.end()) > distance(s.rbegin(), backIter)) {
            decoder[*frontIter] = *backIter;
            decoder[*backIter] = *frontIter;
            ++frontIter;
            ++backIter;
        }
        
        /*for (const char& e : s)
        {
            cout << e << " "; 
        }*/
        /*for (int j = 0; j < n; j++)
        {
            cout << b[j];
        }
        cout<< " string b" << n <<endl;*/
        
        for (int j = 0; j < n; j++)
        {
            cout << decoder[b[j]];
        }
        cout << endl;
        //cout << " " << decoder['c'] << endl;

        /*std::cout << "Contents of std::unordered_map:" << i << std::endl;
        for (const auto& pair : decoder) {
            std::cout << pair.first << " => " << pair.second << std::endl;
        }*/
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}
