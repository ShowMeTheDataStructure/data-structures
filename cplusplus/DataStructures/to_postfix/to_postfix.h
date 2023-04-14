#ifndef TO_POSTFIX_H_
#define TO_POSTFIX_H_

#include <iostream>
#include <sstream>

namespace ShowMeTheDataStructure
{
    class toPostfix
    {
    public:
        std::string infixToPostfix(const std::string &infix);
        std::string prefixToPostfix(const std::string &prefix);
    };
} // namespace ShowMeTheDataStructure

#endif