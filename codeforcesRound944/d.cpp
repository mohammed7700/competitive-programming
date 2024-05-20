#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int t;cin>>t;

    for (int i = 0; i < t; i++)
    {
        string s; 
        cin >> s;

        int pieces = 1;

        int offset = 0;

        string sorted = s;
        sort(sorted.begin(), sorted.end());

        if(s == sorted){
            cout << pieces << endl;
            
        } else {

            if(s[0] == '1') {

                pieces++;

                for (int j = 0; j < s.length(); j++)
                {
                    if(s[j] != s[j+1]){

                        if(j == s.length()-1){
                            pieces = 1;
                        }
                        offset=j+1;
                        j=s.length();
                    }
                }
            }

            //cout<<"offset: "<< offset <<endl;

            for (int j = offset; j < s.length()-1; j++)
            {
                //cout << j << " "<< s[j] << " " << s[j+1] << " ";
                if(s[j] != s[j+1]) {
                    pieces++;
                }
                
                //cout<<"pieces tmp: "<<pieces<<endl;
            }

            cout << pieces-1 << endl;
        }   
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}

