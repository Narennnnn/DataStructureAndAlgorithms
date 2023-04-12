#include <bits/stdc++.h>
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
        int comparisons = 0, shifts = 0;
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                comparisons++;
                arr[j + 1] = arr[j];
                j--;
                shifts++;
            }
            arr[j + 1] = key;
            shifts++;
        }
        // output sorted array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        // output number of comparisons
        cout << "Comparisons: " << comparisons << endl;
        // output number of shifts
        cout << "Shifts: " << shifts << endl;
    }
    return 0;
}
