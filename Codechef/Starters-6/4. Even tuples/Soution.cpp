#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    std::cin >> t;
    while (t--)
    {
        long long n, q;
        std::cin >> n >> q;
        long long evencount[n + 1];
        evencount[0] = 0;
        long long count = 0;
        for (long long i = 1; i <= n; i++)
        {
            long long x;
            std::cin >> x;
            if (x % 2 == 0)
            {
                count++;
            }
            evencount[i] = count;
        }
        while (q--)
        {
            long long l, r;
            std::cin >> l >> r;
            long long even = evencount[r] - evencount[l - 1];
            long long odd = (r - l + 1) - even;
            // TO find total num formula is: even-C-3 + (odd-C-2 * even), r-C-n = n!/(r!(n-r)!)
            // even-C-3 can be written as after simplification: (even * (even -1) * (even -2))/6
            // odd-C-2 can be written as after simplification: ((odd*(odd-1))/2) * even)
            long long result = (even * (even - 1) * (even - 2)) / 6 + (((odd * (odd - 1)) / 2) * even);
            std::cout << result << std::endl;
        }
    }

    return 0;
}
