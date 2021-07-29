#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define int long long int

// Solution using unordered set

struct pair_hash
{
    inline std::size_t operator()(const std::pair<int, int> &v) const
    {
        return v.first * 31 + v.second;
    }
};

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
        unordered_set<pair<int, int>, pair_hash> st;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < arr[i]; j++)
            {
                pair<int, int> pr;
                pr.first = j;
                pr.second = arr[i] - j;
                if (st.find(pr) != st.end())
                {
                    continue;
                }
                else
                {
                    st.emplace(pr);
                    break;
                }
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}

// Solution using map

void solve()
{

    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        freq[elem]++;
    }

    int ans = 0;
    for (auto [elem, freq_elem] : freq)
    {
        ans += min(elem - 1, freq_elem);
    }

    cout << ans << '\n';
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}
