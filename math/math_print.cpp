module;

#include <iostream>
#include <concepts>

export module hn.math:print;

namespace hn::math
{
	template <typename T>
	concept number = std::integral<T> || std::floating_point<T>;

	export template <number T>
		void print(T number)
	{
		std::cout << "The number is: " << number << "\n";
	}
}