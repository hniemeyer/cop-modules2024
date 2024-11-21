module;

#include <algorithm>
#include <cmath>
#include <span>
#include <ranges>

export module hn.math:geometry;

namespace hn::math {
	export struct Point
	{
		double x;
		double y;
	};

	export struct Cirlcle
	{
		Point center;
		double radius;
	};

	export double distance(const Point& a, const Point& b) {
		return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
	}

	export bool all_points_in_circle(const std::span<const Point> points, const Cirlcle& circle) {
		return std::ranges::all_of(points, [&](const Point& p) {
			return distance(p, circle.center) <= circle.radius;
			});
	}



}