#ifndef TO_POSTFIX_H_
#define TO_POSTFIX_H_

#include "../stack/stack.h"
#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>

namespace ShowMeTheDataStructure
{
  class toPostfix
  {
  private:
    int priority(std::string ex);
    bool isOperator(std::string ex);

  public:
    std::string infixToPostfix(const std::string &infix);
    std::string infixToPrefix(const std::string &infix);
    std::string prefixToInfix(const std::string &prefix);
    std::string prefixToPostfix(const std::string &prefix);
    std::string postfixToInfix(const std::string &postfix);
    std::string postfixToPrefix(const std::string &postfix);
  };
}; // namespace ShowMeTheDataStructure

#endif