#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin >> n; // size of array
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // input array elements
        }
        sort(arr, arr + n); // sort the array
        bool hasDuplicates = false;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                hasDuplicates = true;
                break;
            }
        }
        // output whether duplicates are present or not
        if (hasDuplicates) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
