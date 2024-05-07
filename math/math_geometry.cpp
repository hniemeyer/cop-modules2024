module;

#include <cmath>

export module hn.math:geometry;

namespace hn::math {
	export struct Point
	{
		double x;
		double y;
	};

	export double distance(const Point& a, const Point& b) {
		return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
	}

}