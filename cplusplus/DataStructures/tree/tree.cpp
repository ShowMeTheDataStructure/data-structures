// #include "./tree.h"

// explicit ShowMeTheDataStructure::Tree::Tree(char h, Tree *l = nullptr,
//                                             Tree *r = nullptr) {
//     expr = std::string(1, h);
//     left = l;
//     right = r;
// }

// explicit ShowMeTheDataStructure::Tree::Tree(
//     const std::string &h = std::string(), Tree *l = nullptr,
//     Tree *r = nullptr) {
//     expr = h;
//     left = l;
//     right = r;
// }

// ShowMeTheDataStructure::Tree::~Tree() {
//     delete left;
//     delete right;
// }

// int ShowMeTheDataStructure::Tree::size() {
//     int size = 1;
//     if (left != NULL) {
//         size += left->size();
//     }
//     if (right != NULL) {
//         size += right->size();
//     }
//     return size;
// }

// void ShowMeTheDataStructure::Tree::print() {}

// double ShowMeTheDataStructure::Tree::eval() {}

// const std::string ShowMeTheDataStructure::Tree::value() {}

// ShowMeTheDataStructure::Tree *
// ShowMeTheDataStructure::build_expression_tree(const std::string &postfix) {}