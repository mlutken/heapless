#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../hstl_vector.hpp"

// ---------------------------------------------
// --- SYSTEM Mocking for my_base_module ---
// ---------------------------------------------

using namespace testing;

class HstlVectorUnitTest : public testing::Test
{
public:

    HstlVectorUnitTest()  {}

    ~HstlVectorUnitTest() override {}

    /*  Warning: SetUp will be called before each TEST_F but not for every
     *           loop if the test contains for-loops.
     *           Each loop will reset the expected counters though.
     */
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};

// ------------------------------
// --- PUBLIC functions tests ---
// ------------------------------

TEST_F(HstlVectorUnitTest, create__basic_test)
{
    EXPECT_EQ(6, 6);
}



// --------------------------------------
// --- PRIVATE Helper functions tests ---
// --------------------------------------

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
