#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define int long long int

//
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minele = *min_element(arr, arr + n);
        int result = 0;

        int freq = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == minele)
            {
                continue;
            }

            int temp = arr[i] % (arr[i] - minele);
            if (temp != minele)
            {
                minele = 0;
                freq++;
                result = 0;
                break;
            }
            else
            {
                result++;
            }
        }

        if (freq > 0)
        {

            for (int i = 0; i < n; i++)
            {
                if (arr[i] != 0)
                {
                    result++;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}

//

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minele = *min_element(arr.begin(), arr.end());
        int cnt = count(arr.begin(), arr.end(), minele);
        bool all = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == minele)
                continue;
            else if (arr[i] <= 2ll * minele)
            {
                all = true;
                break;
            }
        }
        if (all)
            cout << n << endl;
        else
            cout << n - cnt << endl;
    }
    return 0;
}
