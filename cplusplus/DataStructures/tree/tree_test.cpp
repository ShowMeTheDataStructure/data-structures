#include "tree.h"

#include <gtest/gtest.h>

using BasicTree = ShowMeTheDataStructure::Tree;

void test(const std::string RESULT, BasicTree *BT)
{
    EXPECT_EQ(RESULT, BT->value());
}

TEST(unitTest, tree)
{
    std::string postfix = std::string();
    postfix = "-1 2 -3 4 * + * -2 /";

    ShowMeTheDataStructure::Tree *postfix_tree =
        ShowMeTheDataStructure::build_expression_tree(postfix);

    test("(/,*,-2,-1,+,null,null,null,null,2,*,null,null,-3,4)",
         postfix_tree);
    EXPECT_EQ(-5, postfix_tree->eval());
    EXPECT_EQ(9,
              postfix_tree->size());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}