#include <iostream>

#include "./DataStructures/linkedList/linkedList.h"
#include "./DataStructures/linkedList/linkedList.cpp"
#include "./DataStructures/stack/stack.h"
#include "./DataStructures/stack/stack.cpp"
#include "./DataStructures/queue/queue.h"
#include "./DataStructures/queue/queue.cpp"
#include "./DataStructures/to_postfix/to_postfix.h"
#include "./DataStructures/to_postfix/to_postfix.cpp"
#include "./DataStructures/tree/tree.h"
#include "./DataStructures/tree/tree.cpp"

using namespace std;
using namespace ShowMeTheDataStructure;

int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ShowMeTheDataStructure::LinkedList<int> LL;
    ShowMeTheDataStructure::Stack<int> st;
    ShowMeTheDataStructure::Queue<int> q;
    ShowMeTheDataStructure::toPostfix tp;

    string infix = "-1 * ( 2 + -3 * 4 ) / -2";
    string postfix = tp.infixToPostfix(infix);

    ShowMeTheDataStructure::Tree *postfix_tree = build_expression_tree(postfix);
    // (/, *, -2, -1, +, null, null, null, null, 2, *, null, null, -3, 4)
    postfix_tree->print();

    // -5
    // std::cout << postfix_tree->eval() << std::endl;
    // delete postfix_tree;

    return 0;
}
