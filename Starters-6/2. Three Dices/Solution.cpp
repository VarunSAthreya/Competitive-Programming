#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// your code goes here
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		/* code */
		int x, y;
		std::cin >> x;
		std::cin >> y;

		int difference = 6 - (x + y);
		if (difference > 0)
		{
			std::cout << std::setprecision(8) << std::fixed << difference / 6.0 << std::endl;
		}
		else
		{
			std::cout << 0 << std::endl;
		}
	}
	return 0;
}
