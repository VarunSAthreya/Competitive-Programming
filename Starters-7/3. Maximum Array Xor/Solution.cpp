#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <limits>
using namespace std;
#define int long long int

signed main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int m = n - 1;
        int shift = pow(2, m);
        int length = pow(2, n) - 1;
        int result;
        if (k > shift)
        {
            result = 2 * length * shift;
        }
        else
        {
            result = 2 * length * k;
        }
        cout << result << endl;
    }

    return 0;
}
