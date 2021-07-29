#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c && c == a)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
