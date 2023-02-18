#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, x, c = 0;
    cin >> t;
    while (t--)
    {
        cout << "size is";
        cin >> n;
        vector<int> a(n);
        unordered_set<int> s;
        cout << "array is:";
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[i] = x;
            s.insert(x);
        }
        cout << "key is:";
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            if (s.count(k + a[i]))
                c++;
        }
        cout << "Result is " << c << endl;
    }
    return 0;
}
