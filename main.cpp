import hn.math;

#include <iostream>

int main()
{
	constexpr int a = 10;
	constexpr int b = 5;

	std::cout << "a + b = " << hn::math::add(a, b) << std::endl;
	std::cout << "a - b = " << hn::math::subtract(a, b) << std::endl;
	std::cout << "a * b = " << hn::math::multiply(a, b) << std::endl;
	std::cout << "a / b = " << hn::math::divide(a, b) << std::endl;

	return 0;
}
