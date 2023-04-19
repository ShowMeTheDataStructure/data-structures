#include "linkedList.cpp"
#include "linkedList.h"
#include <gtest/gtest.h>
#include <vector>

using BasicLinkedList = ShowMeTheDataStructure::LinkedList<int>;

void test(std::string RESULT, BasicLinkedList &BLL)
{
    std::string LIST;

    LIST += "(";

    for (int index = 0; index < BLL.Size(); index++)
    {
        LIST += std::to_string(BLL.Get(index));

        if (index != BLL.Size() - 1)
            LIST += ',';
    }

    LIST += ')';

    EXPECT_EQ(RESULT, LIST);
}

TEST(unitTest1, LinkedList)
{
    ShowMeTheDataStructure::LinkedList<int> LL;

    for (int i = 1; i < 11; i++)
        LL.AddAtHead(i);

    test("(10,9,8,7,6,5,4,3,2,1)", LL);

    LL.AddAtIndex(2, 8);
    test("(10,9,8,8,7,6,5,4,3,2,1)", LL);

    LL.DeleteAtIndex(3);
    test("(10,9,8,7,6,5,4,3,2,1)", LL);

    LL.DeleteValue(9);
    test("(10,8,7,6,5,4,3,2,1)", LL);

    LL.MoveToHead(2);
    test("(2,10,8,7,6,5,4,3,1)", LL);

    LL.Rotate(2);
    test("(3,1,2,10,8,7,6,5,4)", LL);

    LL.AddAtHead(4);
    test("(4,3,1,2,10,8,7,6,5,4)", LL);

    LL.Reduce(1);
    test("(4,3,1,2,10,8,7,6,5)", LL);

    LL.AddAtIndex(7, 10);
    test("(4,3,1,2,10,8,7,10,6,5)", LL);

    LL.K_Reverse(3);
    test("(1,3,4,8,10,2,6,10,7,5)", LL);

    LL.EvenOddSeparateSort();
    test("(2,4,6,8,10,10,1,3,5,7)", LL);

    LL.CleanUp();
    test("()", LL);

    for (int i = 1; i < 11; i++)
    {
        LL.AddAtHead(i);
        LL.AddAtTail(i);
    }
    test("(10,9,8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9,10)", LL);

    LL.EvenOddSeparateSort();
    test("(2,2,4,4,6,6,8,8,10,10,1,1,3,3,5,5,7,7,9,9)", LL);

    LL.Reduce(1);
    test("(2,2,4,4,6,6,8,8,10,10,1,1,3,3,5,5,7,7,9)", LL);

    LL.K_Reverse(3);
    test("(4,2,2,6,6,4,10,8,8,1,1,10,5,3,3,7,7,5,9)", LL);

    LL.Rotate(5);
    test("(3,7,7,5,9,4,2,2,6,6,4,10,8,8,1,1,10,5,3)", LL);

    LL.MoveToHead(10);
    test("(10,3,7,7,5,9,4,2,2,6,6,4,8,8,1,1,10,5,3)", LL);

    EXPECT_EQ(false, LL.Empty());
    EXPECT_EQ(19, LL.Size());

    LL.CleanUp();
    EXPECT_EQ(true, LL.Empty());
    EXPECT_EQ(0, LL.Size());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}