#ifndef TREE_H_
#define TREE_H_

#include "../stack/stack.h"
#include <iostream>
#include <sstream>
#include <cstring>

namespace ShowMeTheDataStructure
{

    /**
     * Recursive binary tree structure for building expression tree
     */
    struct Tree
    {
        std::string expr;
        Tree *left;
        Tree *right;

        // Constructor, type of h - character
        explicit Tree(char h, Tree *l, Tree *r);

        // Constructor, type of h - string
        explicit Tree(const std::string &h, Tree *l, Tree *r);

        // Destructor
        ~Tree();

        // Size
        int size();

        // Print
        void print();

        // Eval
        double eval();

        const std::string value();
    };

    // build expression tree
    Tree *build_expression_tree(const std::string &postfix);
}; // namespace ShowMeTheDataStructure

#endif