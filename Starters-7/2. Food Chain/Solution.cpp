#include <iostream>
#include <cmath>
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
        int count = 1;
        while (a / b > 0)
        {
            a = (a / b);
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
