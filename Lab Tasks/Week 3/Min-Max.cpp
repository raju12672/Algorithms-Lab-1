#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, mx = INT_MIN, mn = INT_MAX, s = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        s += x;
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }
    cout << s - mx << " " << s - mn << endl;

    return 0;
}