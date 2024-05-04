#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

import hn.math;

TEST_CASE("check_add") {
	CHECK_EQ(hn::math::add(5, 6), 11);
	CHECK_EQ(hn::math::add(5.1, 6.2), doctest::Approx(11.3));
}

TEST_CASE("check_subtract")
{
	CHECK_EQ(hn::math::subtract(5, 6), -1);
	CHECK_EQ(hn::math::subtract(5.1, 6.2), doctest::Approx(-1.1));
}

