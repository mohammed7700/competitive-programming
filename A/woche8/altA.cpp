#include <bits/stdc++.h>


int main() {

    int h1,h2,a,b;
    while(scanf("%d%d%d%d", &h1, &h2, &a, &b) != EOF) {

        if(h1+8*a<h2&&h1+12*a-12*b<=h1) {

            printf("-1\n");
            continue;
        }
        if(a==b&&h1+8*a<h2) {
            printf("-1\n");
            continue;
        }
        int ans=0;

        while(1) {
            h1+=a*8;
            if(h1>=h2) break;
            h1-=b*12;
            ans++;
            h1+=a*4;
        }

        printf("%d\n", ans);
    }
    return 0;
}
