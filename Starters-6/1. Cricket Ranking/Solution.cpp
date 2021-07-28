#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r1;
        std::cin >> r1;
        int w1;
        std::cin >> w1;
        int c1;
        std::cin >> c1;

        int r2;
        int w2;
        int c2;
        std::cin >> r2;
        std::cin >> w2;
        std::cin >> c2;

        int player1 = 0;
        int player2 = 0;

        if (r1 > r2)
        {
            player1++;
        }
        else
        {
            player2++;
        }
        if (w1 > w2)
        {
            player1++;
        }
        else
        {
            player2++;
        }
        if (c1 > c2)
        {
            player1++;
        }
        else
        {
            player2++;
        }

        if (player1 > player2)
        {
            std::cout << "A" << std::endl;
            ;
        }
        else
        {
            std::cout << "B" << std::endl;
        }
    }
    return 0;
}
