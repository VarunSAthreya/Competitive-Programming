#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (gcd(x, y) == 1)
        {
            if (gcd(x + 1, y) == 1)
            {
                if (gcd(x, y + 1) == 1)
                {
                    cout << 2 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
