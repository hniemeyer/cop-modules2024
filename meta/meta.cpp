module;

#include <string>
#include "metal.hpp"

export module hn.meta;

namespace hn::meta {

	export struct stringy { std::string content; };

	export struct doubly { double x; };

	export struct floaty { float x; float y; };

	using l0 = metal::list<>;

	using l1 = metal::prepend<l0, stringy>;

	using l2 = metal::append<l1, doubly>;

	export using l3 = metal::insert<l2, metal::number<1>, floaty>;

	template<class X, class Y>
	using smaller = metal::number<(sizeof(X) < sizeof(Y))>;

	export using sorted = metal::sort<l3, metal::lambda<smaller>>;

}