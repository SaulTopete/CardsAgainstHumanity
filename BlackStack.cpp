//
// Created by Saul Topete on 12/9/20.
//

#include "BlackStack.h"

BlackStack::BlackStack() {
    initStack();
}

void BlackStack::initStack() {
    for(int i = 0; i < 10; i++)
    {
        blackStack.push(cardList.getBlackCardAt(i));
    }
}

bool BlackStack::isEmpty() {
    return blackStack.empty();
}

void BlackStack::removeFromStack() {
    if(!(blackStack.empty())) {
        blackStack.pop();
    }
    else
        std::cout << "Stack empty\n";


}

std::string BlackStack::getBlackTop() const{
    return blackStack.top();
}