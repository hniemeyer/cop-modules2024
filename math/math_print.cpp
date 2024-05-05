module;

#include <iostream>
#include <vector>

export module hn.math:print;
import :concepts;
import :statistics;

namespace hn::math
{
	export template <number T>
	void print(T number)
	{
		std::cout << "The number is: " << number << "\n";
	}

	export template <number T>
	void print_average(const std::vector<T> input)
	{
		std::cout << "Average of the vector is: " << hn::math::average(input) << std::endl;
	}
}