#include <catch2/catch_test_macros.hpp>

import hn.math;

TEST_CASE("add", "hn.math") {
	REQUIRE(hn::math::add(5, 6) == 11);
}

