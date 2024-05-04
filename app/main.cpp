import hn.math;

#include <vector>

int main()
{
	const std::vector a = { 1., 2., 3., 4., 5. };
	hn::math::print(hn::math::average(a));
	return 0;
}
