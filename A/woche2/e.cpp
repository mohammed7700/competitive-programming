#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char* tmp = new char[10^5]; 

    std::string strtmp;
    cin >> strtmp;
    const char* tmp = (char*)strtmp.c_str();

    int tmpLen = strlen(tmp);
    if(tmpLen%2 == 0) {

        const char* revTmp = strtmp.c_str();
        reverseChar(revTmp);

        for(int i = 0; i < tmpLen; i++) {


        }
    }
    for(int i = 0; i)
}

void reverseChar(char* str) {
    const size_t len = strlen(str);

    for(size_t i=0; i<len/2; i++)
        swap(str[i], str[len-i-1]);
}