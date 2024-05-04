module;
#include <concepts>

export module hn.math:concepts;

namespace hn::math
{
	// this is not exported and not available to the outside world
	template <typename T>
	concept number = std::integral<T> || std::floating_point<T>;
}
