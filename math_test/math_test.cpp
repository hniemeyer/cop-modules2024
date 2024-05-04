#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

import hn.math;

TEST_CASE("check_average")
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	CHECK_EQ(hn::math::average(v), 3);
	std::vector<double> w = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	CHECK_EQ(hn::math::average(w), doctest::Approx(3.3));
}
