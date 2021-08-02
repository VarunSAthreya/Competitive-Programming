#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k, i;
        std::cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
            std::cin >> a[i];

        if (n == k)
        {
            std::cout << "0\n";
            continue;
        }
        vector<int> dp(n);
        deque<pair<int, int>> dq;
        for (i = 0; i <= k; i++)
        {
            dp[i] = a[i];
            while (!dq.empty() && dq.back().first > dp[i])
                dq.pop_back();
            dq.push_back({dp[i], i});
        }
        for (i = k + 1; i < n; i++)
        {
            if (!dq.empty() and dq.front().second < i - k - 1)
                dq.pop_front();
            int pref_min = dq.front().first;
            dp[i] = a[i] + pref_min;
            while (!dq.empty() and dq.back().first > dp[i])
                dq.pop_back();
            dq.push_back({dp[i], i});
        }

        int ans = INT_MAX;
        for (i = n - k - 1; i < n; i++)
            ans = min(ans, dp[i]);

        std::cout << ans << std::endl;
    }

    return 0;
}
