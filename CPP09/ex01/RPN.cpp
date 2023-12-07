#include "RPN.hpp"

bool    isoperator(int c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (true);
    return (false);
}

int     operation(int operand, int tmp, std::stack<int> rpnStack) {
    switch (operand)
    {
        case '+':
            return (rpnStack.top() + tmp);
            break;
        case '-':
            return (rpnStack.top() - tmp);
            break;
        case '*':
            return (rpnStack.top() * tmp);
            break;
        case '/':
            return (rpnStack.top() / tmp );
            break;
    }
    return (0);
}

std::stack<int> RPN(char  *arg) {
    std::stack<int> rpnStack;
    int             tmp;
    int             result;

    while (*arg) {
        if (isdigit(*arg)) {
            rpnStack.push(*arg - '0');
        } else if (isoperator(*arg) == true) {
            tmp = rpnStack.top();
            rpnStack.pop();
            if (!rpnStack.empty()) {
                result = operation(*arg, tmp, rpnStack);
                rpnStack.pop();
                rpnStack.push(result);
            }
        } else if (!isspace(*arg)) {
            throw (std::invalid_argument("Error"));
        }
        arg++;
    }
    //std::cout << rpnStack.top() << std::endl;
    return (rpnStack);
}