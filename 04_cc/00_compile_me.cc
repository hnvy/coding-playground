#include <iostream>

int main()
{
	int sum = 0, val = 0;

	while (val <= 90)
	{
		sum += val;
		++val;
		std::cout << "The value is now " << val
		<< std::endl;
	}

	std::cout << "The total sum is " << sum
	<< std::endl;

	return 0;
}

