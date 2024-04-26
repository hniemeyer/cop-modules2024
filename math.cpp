// Global module fragment where #includes can happen
module;
#include <iostream>

// first thing after the Global module fragment must be a module command
export module math;

namespace hn::math
{
	export int add(int a, int b)
	{
		return a + b;
	}

	export int subtract(int a, int b)
	{
		return a - b;
	}

	export int multiply(int a, int b)
	{
		return a * b;
	}

	export int divide(int a, int b)
	{
		return a / b;
	}
}