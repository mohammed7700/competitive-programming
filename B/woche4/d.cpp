#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
void run() {
 
    int n;cin>>n;
 
    string words;cin>>words;
 
    bool parenthesis=false;
 
    int a, b, tmp; // a := count of words in parenthesis, b := length of longest word not in parenthesis
 
    a=0;b=0;tmp=0;
 
    for (int i = 0; i < n; i++)
    {
        
        if( (words[i] >= 65 && words[i] <= 90) || (words[i] >= 97 && words[i] <= 122) ) {
 
            tmp++;
        }
        
 
        else if( '_' == words[i]){
 
            if(!parenthesis) {
                b = (tmp > b)*tmp + (tmp <= b)*b;
            }else{
                a = a + (tmp > 0)*1;
            }
            /*a = (tmp > a)*tmp*!parenthesis + (tmp < a)*a*!parenthesis;
            b = (tmp > b)*tmp*parenthesis + (tmp < b)*b*parenthesis;*/
            tmp=0;
        }
 
        else if('(' == words[i]){
            b = (tmp > b)*tmp + (tmp <= b)*b;
            tmp=0;
            parenthesis = true;
        }
 
        else if(')' == words[i]){
            a = a = a + (tmp > 0)*1;
            tmp=0;
            parenthesis = false;
        }
    }
 
 
    cout << b*(tmp<=b)+tmp*(tmp>b) << " " << a;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}