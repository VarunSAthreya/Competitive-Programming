#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, m, l;
        std::cin >> n >> m >> l;
        int id[n + 1];
        for (int i = 1; i <= m; i++)
        {
            int k;
            std::cin >> k;
            for (int j = 1; j <= k; j++)
            {
                int x;
                std::cin >> x;
                id[x] = i;
            }
        }
        int prevStrip = 0;
        int result = 0;
        for (int i = 1; i <= l; i++)
        {
            int s;
            std::cin >> s;
            if (id[s] != prevStrip)
            {
                result++;
            }
            prevStrip = id[s];
        }
        std::cout << result << std::endl;
    }

    return 0;
}
