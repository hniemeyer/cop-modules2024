module;

#include <vector>

export module hn.math:blub;

namespace hn::math {
	export struct Point
	{
		double x;
		double y;
	};

	export double distance(const Point& a, const Point& b);

}