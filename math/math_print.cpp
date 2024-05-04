module;

#include <iostream>

export module hn.math:print;
import :concepts;

namespace hn::math
{
	export template <number T>
		void print(T number)
	{
		std::cout << "The number is: " << number << "\n";
	}
}