
export module hn.math:arithmetic;


namespace hn::math
{
	export constexpr int add(const int a, const int b)
	{
		return a + b;
	}

	export constexpr int subtract(const int a, const int b)
	{
		return a - b;
	}

	export constexpr int multiply(const int a, const int b)
	{
		return a * b;
	}

	export constexpr int divide(const int a, const int b)
	{
		return a / b;
	}
}