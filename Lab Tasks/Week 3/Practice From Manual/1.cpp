#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], k, id = -1;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter the product key: ";
    cin >> k;
    int lo = 0, hi = n - 1, mid;
    bool found = false;
    while (lo <= hi) {
        mid = (hi - lo) / 2 + lo;
        if (a[mid] == k) {
            lo = mid;
            if (a[mid + 1] == a[mid])
                lo = mid + 1;
            else {
                found = true;
                break;
            }
        } else if (a[mid] > k)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    if (!found)
        cout << "Item not found." << endl;
    else
        cout << "Last occurence " << mid << endl;
    return 0;
}