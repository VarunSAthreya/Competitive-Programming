#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define int long long int

// Using max of the variable
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
        int maximum = *max_element(arr, arr + n);
        int ored = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i] ^ maximum;
            ored = ored | temp;
        }
        cout << maximum << " " << ored << endl;
    }

    return 0;
}

// Another solution:

// Using AND methid
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int AND = -1; // Set all bits to 1
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            AND = AND & arr[i];
        }
        int min = 0;
        for (int i = 0; i < n; i++)
        {
            min = min | (arr[i] ^ AND);
        }
        cout << AND << " " << min << endl;
    }

    return 0;
}
