#include "./tree.h"

int priority(std::string ex)
{
    if (ex == "+" || ex == "-")
        return 4;
    else if (ex == "*" || ex == "/")
        return 3;
    else if (ex == "(" || ex == ")")
        return 1;
    else
        return 0;
}

bool isOperator(std::string ex)
{
    if (priority(ex))
        return true;
    else
        return false;
}

ShowMeTheDataStructure::Tree::Tree(char h, Tree *l = nullptr, Tree *r = nullptr)
{
    expr = std::string(1, h);
    left = l;
    right = r;
}

ShowMeTheDataStructure::Tree::Tree(const std::string &h, Tree *l = nullptr, Tree *r = nullptr)
{
    expr = h;
    left = l;
    right = r;
}

ShowMeTheDataStructure::Tree::~Tree()
{
    delete left;
    delete right;
}

int ShowMeTheDataStructure::Tree::size()
{
    int size = 1;
    if (left != NULL)
    {
        size += left->size();
    }
    if (right != NULL)
    {
        size += right->size();
    }
    return size;
}

void ShowMeTheDataStructure::Tree::print()
{
}

double ShowMeTheDataStructure::Tree::eval() {}

const std::string ShowMeTheDataStructure::Tree::value() {}

ShowMeTheDataStructure::Tree *
ShowMeTheDataStructure::build_expression_tree(const std::string &postfix)
{
    std::stringstream ss;
    ss.str(postfix);
    std::string token = std::string();
    ShowMeTheDataStructure::Stack<std::string> st;

    while (ss >> token)
    {
        std::cout << token << std::endl;
    }
}