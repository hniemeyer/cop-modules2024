module;

#include <cmath>

module blub;
import hn.math;

namespace hn::math {
	double distance(const Point& a, const Point& b)
	{
		return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
	}
}