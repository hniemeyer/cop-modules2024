module;

#include <vector>

export module hn.math:geometry;

namespace hn::math {
	export struct Point
	{
		double x;
		double y;
	};

	export double distance(const Point& a, const Point& b);

}