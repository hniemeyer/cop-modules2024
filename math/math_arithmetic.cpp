
export module hn.math:arithmetic;
import :concepts;

namespace hn::math
{
	export template <number T>
	constexpr T add(const T a, const T b)
	{
		return a + b;
	}

	export template <number T>
	constexpr T subtract(const T a, const T b)
	{
		return a - b;
	}

	export template <number T>
	constexpr T multiply(const T a, const T b)
	{
		return a * b;
	}

	export template <number T>
	constexpr T divide(const T a, const T b)
	{
		return a / b;
	}
}