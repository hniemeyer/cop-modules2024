module;

export module hn.math;
export import :statistics;
export import :print;
export import :concepts;
export import :geometry;

namespace hn::math
{
	export Point make_point(const double x, const double y);
}

module :private;

namespace hn::math
{
	Point make_point(const double x, const double y)
	{
		return Point{ x, y };
	}
}