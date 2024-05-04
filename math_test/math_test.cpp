#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

import hn.math;

TEST_CASE("check_add") {
	CHECK(hn::math::add(5, 6) == 11);
}

