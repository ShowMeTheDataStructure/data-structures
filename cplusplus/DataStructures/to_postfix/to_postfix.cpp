#include "to_postfix.h"

int ShowMeTheDataStructure::toPostfix::priority(std::string ex)
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

bool ShowMeTheDataStructure::toPostfix::isOperator(std::string ex)
{
    if (priority(ex))
        return true;
    else
        return false;
}

std::string ShowMeTheDataStructure::toPostfix::infixToPostfix(
    const std::string &infix)
{
    // tokenization
    std::stringstream ss;
    ss.str(infix);
    std::string str = std::string();
    std::string postfix = std::string();

    ShowMeTheDataStructure::Stack<std::string> st;
    std::cout << infix << std::endl;

    while (ss >> str)
    {
        if (!isOperator(str))
            postfix += str + " ";

        else if (str == "(")
            st.push(str);

        else if (str == ")")
        {
            while (!st.empty() && st.top() != "(")
            {
                postfix += st.top() + " ";
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && priority(st.top()) != 1 && priority(st.top()) <= priority(str))
            {
                postfix += st.top() + " ";
                st.pop();
            }
            st.push(str);
        }
    }

    while (!st.empty())
    {
        postfix += st.top() + " ";
        st.pop();
    }

    return postfix;
}

std::string ShowMeTheDataStructure::toPostfix::infixToPrefix(
    const std::string &infix)
{
    // tokenization
    std::stringstream ss;
    std::string prefix = std::string();
    std::vector<std::string> tokens;
    std::string token;

    ss.str(infix);

    ShowMeTheDataStructure::Stack<std::string> st;

    while (ss >> token)
        tokens.push_back(token);

    for (auto it = tokens.rbegin(); it != tokens.rend(); it++)
    {
        if (!isOperator(*it))
            prefix = *it + " " + prefix;

        else if (*it == ")")
            st.push(*it);

        else if (*it == "(")
        {

            while (!st.empty() && st.top() != ")")
            {
                prefix = st.top() + " " + prefix;
                st.pop();
            }

            st.pop();
        }
        else if (*it == "(")
        {
            while (!st.empty() && st.top() != ")")
            {
                prefix = st.top() + " " + prefix;
                st.pop();
            }

            st.pop();
        }

        else
        {
            while (!st.empty() && priority(st.top()) != 1 && priority(st.top()) <= priority(*it))
            {
                prefix = st.top() + " " + prefix;
                st.pop();
            }

            st.push(*it);
        }
    }

    while (!st.empty())
    {
        prefix = st.top() + " " + prefix;
        st.pop();
    }

    return prefix;
}

std::string ShowMeTheDataStructure::toPostfix::prefixToInfix(const std::string &prefix)
{
    std::string postfix = prefixToPostfix(prefix);
    std::string infix = postfixToInfix(postfix);

    return infix;
}

std::string ShowMeTheDataStructure::toPostfix::prefixToPostfix(const std::string &prefix)
{
}

std::string ShowMeTheDataStructure::toPostfix::postfixToInfix(const std::string &postfix)
{
}

std::string ShowMeTheDataStructure::toPostfix::postfixToPrefix(const std::string &postfix)
{
    std::string infix = postfixToInfix(postfix);
    std::string prefix = infixToPrefix(infix);

    return prefix;
}