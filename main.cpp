import hn.math;

#include <iostream>

int main()
{
	constexpr int a = 10;
	constexpr int b = 5;

	hn::math::print(hn::math::add(a, b));

	return 0;
}
