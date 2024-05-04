module;

#include <ranges>
#include <algorithm>

export module hn.math:arithmetic;
import :concepts;

namespace hn::math
{
	export template <std::ranges::forward_range R>
	auto average(R&& r)
	{
		using T = std::ranges::range_value_t<R>;
		return std::ranges::fold_left(r, T{}, std::plus{}) / std::ranges::size(r);
	}

}