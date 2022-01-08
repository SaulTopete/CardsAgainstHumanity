//
// Created by Saul Topete on 12/7/20.
//

#ifndef FINALPROJECT_WHITESTACK_H
#define FINALPROJECT_WHITESTACK_H

#include <iostream>
#include <stack>
#include "WhiteCardList.h"


class WhiteStack {
public:
    WhiteStack();
    void removeFromStack();
    bool isEmpty();
    std::string getWhiteTop() const;

private:
    void initStack();

    //Variables
    std::stack<std::string> whiteStack;
    WhiteCardList cardList;
};


#endif //FINALPROJECT_WHITESTACK_H
