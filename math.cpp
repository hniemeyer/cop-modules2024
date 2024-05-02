// Global module fragment where #includes can happen
module;
#include <iostream>

// first thing after the Global module fragment must be a module command
export module hn.math;
export import :arithmetic;

namespace hn::math
{
	export template <typename T>
	void print()
	{
		std::cout << "The number is: " << "\n";
	}
}