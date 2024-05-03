module;
#include <iostream>

export module hn.math;
export import :arithmetic;

namespace hn::math
{
	export template <typename T>
	void print(T number)
	{
		std::cout << "The number is: " << number <<  "\n";
	}
}