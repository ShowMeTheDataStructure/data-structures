#include "stack.cpp"
#include "stack.h"
#include <gtest/gtest.h>

using BasicStack = ShowMeTheDataStructure::Stack<int>;

void test(int RESULT, BasicStack &BS)
{
    EXPECT_EQ(RESULT, BS.top());
}

TEST(unitTest, stack)
{
    ShowMeTheDataStructure::Stack<int> stack;

    int front = 1000;
    for (int i = 1; i <= 1000; ++i)
        stack.push(i);

    EXPECT_EQ(false, stack.empty());
    EXPECT_EQ(1000, stack.size());

    while (!stack.empty())
    {
        test(front, stack);
        stack.pop();

        front--;
    }

    EXPECT_EQ(true, stack.empty());
    EXPECT_EQ(1000, stack.size());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}