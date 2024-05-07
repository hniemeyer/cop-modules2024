module;

#include <string>
#include <vector>
#include "metal.hpp"

export module hn.meta;

namespace hn::meta {

	export struct stringy { std::string content; };

	export struct doubly { double x; };

	export struct floaty { float x; float y; };

	export struct blubby { std::vector<double> t; };

	using l0 = metal::list<>;

	using l1 = metal::prepend<l0, stringy>;

	using l2 = metal::append<l1, doubly>;

	using l3 = metal::append<l2, blubby>;

	export using l4 = metal::insert<l3, metal::number<1>, floaty>;

	template<class X, class Y>
	using smaller = metal::number<(sizeof(X) < sizeof(Y))>;

	export using sorted = metal::sort<l4, metal::lambda<smaller>>;

}