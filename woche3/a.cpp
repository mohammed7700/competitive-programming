#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    ll ticket1, ticket2, ticket3, ticket4;

    cin >> ticket1 >> ticket2 >> ticket3 >> ticket4;

    ll numbBuses, numbSubways, bus, subway;
    ll sum = 0, tmpSumBuses = 0, tmpSumSubways = 0, tmpBus = 0, tmpSubway = 0;

    cin >> numbBuses >> numbSubways;


    for( int i = 0; i < numbBuses; i++ ) {
        cin >> bus;
        tmpBus = 0;
        tmpBus += ticket1*bus;

        if( ticket2 < tmpBus ) {
            tmpSumBuses += ticket2;
        } else {
            tmpSumBuses += tmpBus;
        }
    }

    if(ticket3 < tmpSumBuses) {
        sum += ticket3;
    } else {
        sum += tmpSumBuses;
    }

    for( int i = 0; i < numbSubways; i++ ) {
        cin >> subway;
        tmpSubway = 0;
        tmpSubway += ticket1*subway;

        if( ticket2 < tmpSubway ) {
            tmpSumSubways += ticket2;
        } else {
            tmpSumSubways += tmpSubway;
        }
    }

    if(ticket3 < tmpSumSubways) {
        sum += ticket3;
    } else {
        sum += tmpSumSubways;
    }
    
    if(ticket4 < sum) {
        cout << ticket4;
        return;
    }

    cout << sum;
    // if(ticket4 <= ticket1 && ticket4 <= ticket2 && ticket4 <= ticket3) {

    //     cout << ticket4;
    //     return;
    // } 

    // if(ticket3 <= ticket2 && ticket3 <= ticket1 && ticket3*2 <= ticket4) {

    //     cout << ticket3*2;
    //     return;
    // }

    // for( int i = 0; i < numbBuses; i++ ) {

    //     cin >> bus;
    //     if(ticket2*2)
    //     if(ticket2 < ticket1*bus) {
    //         if(ticket2 < ticket3) {
    //             cout << "in ticket2 for Bus " << ticket2 << endl;
    //             sum += ticket2;
    //         } else {
    //             cout << "in ticket3 for Bus " << ticket3 << endl;

    //             sum += ticket3;
    //         }
    //     }
    //     else {
    //         cout << "in ticket1 for Bus " << ticket1*bus << endl;
    //         sum += ticket1*bus;
    //     }
    // }

    // for( int i = 0; i < numbSubways; i++ ) {

    //     cin >> subway;

    //     if(ticket2 < ticket1*subway) {
    //         if(ticket2 < ticket3) {
    //             cout << "in ticket2 for subway " << ticket1*subway << endl;
    //             sum += ticket2;
    //         } else {
    //             sum += ticket3;
    //         }
    //     }
    //     else {
    //         cout << "in ticket1 for subway " << ticket1*subway << endl;
    //         sum += ticket1*subway;
    //     }
    // }

    // if(ticket4 < sum) {
    //     cout << ticket4;
    //     return;
    // } 

    // cout << sum;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    run();
    return 0;
}