#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include <sstream>

namespace ShowMeTheDataStructure
{
    /**
     * Recursive binary tree structure for building expression tree
     */
    class Tree
    {
    private:
        std::string expr;
        Tree *left;
        Tree *right;

    public:
        // Constructor, type of h - character
        explicit Tree(char h, Tree *l = nullptr, Tree *r = nullptr);

        // Constructor, type of h - string
        explicit Tree(const std::string &h = std::string(), Tree *l = nullptr, Tree *r = nullptr);

        // Destructor
        ~Tree();

        // Size
        int size();

        // Print
        void print();

        // Eval
        double eval();

        const std::string value();

        // build expression tree
        // Tree *build_expression_tree(const std::string &postfix);
    };

    Tree *build_expression_tree(const std::string &postfix);
} // namespace ShowMeTheDataStructure

#endif