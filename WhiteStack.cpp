//
// Created by Saul Topete on 12/7/20.
//

#include "WhiteStack.h"

WhiteStack::WhiteStack() {
    initStack();
}

void WhiteStack::initStack() {
    for(int i = 0; i < 10; i++)
    {
        whiteStack.push(cardList.getWhiteCardAt(i));
    }
}

bool WhiteStack::isEmpty() {
    return whiteStack.empty();
}

void WhiteStack::removeFromStack() {
    if(!(whiteStack.empty())) {
        whiteStack.pop();
    }
    else
        std::cout << "Stack empty\n";


}

std::string WhiteStack::getWhiteTop() const{
    return whiteStack.top();
}

