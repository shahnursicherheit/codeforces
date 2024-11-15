#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int divide = n / k;
        int mod = n % k;
        int more_candie = k / 2;

        if (mod <= more_candie) {
            cout << n << endl;
        } else {
            cout << divide * k + more_candie << endl;
        }
    }

    return 0;
}
