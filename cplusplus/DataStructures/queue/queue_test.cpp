#include "queue.cpp"
#include "queue.h"

#include "../linkedList/linkedList.cpp"
#include <gtest/gtest.h>

using BasicQueue = ShowMeTheDataStructure::Queue<int>;

void test(int RESULT, BasicQueue &BQ) { EXPECT_EQ(RESULT, BQ.front()); }

TEST(unitTest, Queue)
{
    ShowMeTheDataStructure::Queue<int> queue;

    int front = 1;
    for (int i = 1; i <= 1000; ++i)
        queue.push(i);

    EXPECT_EQ(false, queue.empty());
    EXPECT_EQ(1000, queue.size());

    while (!queue.empty())
    {
        test(front, queue);
        queue.pop();
        front++;
    }

    EXPECT_EQ(true, queue.empty());
    EXPECT_EQ(0, queue.size());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}