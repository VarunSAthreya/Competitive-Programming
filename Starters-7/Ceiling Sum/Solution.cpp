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
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        int result = INT_MIN;
        int start = min(a, b);
        int end = max(a, b);
        int x = 0;
        for (int i = start; i <= start + 10; i++)
        {
            int first, second;
            if (((b - i) / 2.0) < 0)
            {
                first = trunc(((b - i) / 2.0));
            }
            else
            {
                first = round(((b - i) / 2.0));
            }

            if (((i - a) / 2.0) < 0)
            {
                second = trunc(((i - a) / 2.0));
            }
            else
            {
                second = round(((i - a) / 2.0));
            }
            int sum = first + second;
            // if (sum > result)
            // {
            //     result = sum;
            //     x = i;
            // }
            result = max(result, sum);
        }
        cout << result << endl;
    }

    return 0;
}
