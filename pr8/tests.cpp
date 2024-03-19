#include <gtest/gtest.h>
#include "solution.h"

using namespace std;

TEST(RandomSum, Default)
{
    vector<double> empty;
    vector<double> a{1};
    vector<double> b{1, 1, 1};

    ASSERT_EQ(sumKRandomElements(empty, 0), 0);
    ASSERT_EQ(sumKRandomElements(empty, 1), 0);

    ASSERT_EQ(sumKRandomElements(a, 0), 0);
    ASSERT_EQ(sumKRandomElements(a, 1), 1);
    ASSERT_EQ(sumKRandomElements(a, 5), 5);

    ASSERT_EQ(sumKRandomElements(b, 2), 2);
    ASSERT_EQ(sumKRandomElements(b, 3), 3);
    ASSERT_EQ(sumKRandomElements(b, 5), 5);
}
