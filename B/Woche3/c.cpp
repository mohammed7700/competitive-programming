#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int Fib(int n) {
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return 1;
  }
  return Fib(n - 1) + Fib(n - 2);
}

void run() {

    int n = 0;
    cin >> n;
    cout << Fib(n);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}