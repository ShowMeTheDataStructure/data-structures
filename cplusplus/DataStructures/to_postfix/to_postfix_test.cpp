#include "to_postfix.cpp"
#include "to_postfix.h"
#include <gtest/gtest.h>

using BasicToPostfix = ShowMeTheDataStructure::toPostfix;

void test_infixToPostfix(const std::string RESULT, const std::string infix_result)
{
    EXPECT_EQ(RESULT, infix_result);
}

void test_prefixToPostfix(const std::string RESULT, const std::string prefix_result)
{
    EXPECT_EQ(RESULT, prefix_result);
}

void test(const std::string RESULT, const std::string infix_result, const std::string prefix_result)
{
    test_infixToPostfix(RESULT, infix_result);
    test_prefixToPostfix(RESULT, prefix_result);
}

TEST(unitTest, to_postfix)
{
    ShowMeTheDataStructure::toPostfix to_postfix;

    std::string infix = std::string();
    std::string prefix = std::string();
    std::string postfix = std::string();

    infix = "3 + 2 + 4 * 5 + 3 / 1";
    prefix = "+ + 3 + 2 * 4 5 / 3 1";
    postfix = "3 2 + 4 5 * + 3 1 / +";

    test(postfix, to_postfix.infixToPostfix(infix), to_postfix.prefixToPostfix(prefix));

    infix = "1 + 2 * 3 + 1 + 2 / 2";
    prefix = "+ + 1 * 2 3 + 1 / 2 2";
    postfix = "1 2 3 * 1 2 2 / + + +";

    test(postfix, to_postfix.infixToPostfix(infix), to_postfix.prefixToPostfix(prefix));

    infix = "-1 * (2 + -3 * 4) / -2";
    prefix = "/ * -1 + 2 * -3 4 -2";
    postfix = "-1 2 -3 4 * + * -2";

    test(postfix, to_postfix.infixToPostfix(infix), to_postfix.prefixToPostfix(prefix));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}