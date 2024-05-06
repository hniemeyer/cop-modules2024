#include <vector>
#include <iostream>

import hn.math;
import hn.meta;

int main()
{
	const std::vector a = { 1., 2., 3., 4., 5. };
	hn::math::print(hn::math::average(a));
	constexpr hn::math::Point p1 = { 1., 2. };
	constexpr hn::math::Point p2 = { 1.1, 2.2 };
	hn::math::print(hn::math::distance(p1, p2));
	std::cout << "This is a cool type: " << typeid(hn::meta::sorted).name() << std::endl;
	return 0;
}
