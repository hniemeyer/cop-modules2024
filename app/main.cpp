import hn.math;

#include <vector>

int main()
{
	const std::vector a = { 1., 2., 3., 4., 5. };
	hn::math::print(hn::math::average(a));
	const hn::math::Point p1 = { 1., 2. };
	const hn::math::Point p2 = { 1.1, 2.2 };
	hn::math::print(hn::math::distance(p1, p2));
	return 0;
}
