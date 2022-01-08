//
// Created by Saul Topete on 12/9/20.
//

#ifndef FINALPROJECT_BLACKSTACK_H
#define FINALPROJECT_BLACKSTACK_H

#include <iostream>
#include <stack>
#include "BlackCardList.h"

class BlackStack {
public:
    BlackStack();
    void removeFromStack();
    bool isEmpty();
    std::string getBlackTop() const;

private:
    void initStack();

    //Variables
    std::stack<std::string> blackStack;
    BlackCardList cardList;
};


#endif //FINALPROJECT_BLACKSTACK_H
