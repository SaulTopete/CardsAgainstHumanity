//
// Created by Saul Topete on 12/9/20.
//

#include "BlackCardList.h"

BlackCardList::BlackCardList() {
    createArr();
}

void BlackCardList::createArr() {

    arr[0] = "I love __.";
    arr[1] = "You __.";
    arr[2] = "Holy __!";
    arr[3] = "Man, you really\n __.";
    arr[4] = "Up next, \n__.";
    arr[5] = "P-C-__.";
    arr[6] = "Ah f***, \n___";
    arr[7] = "What the \n__.";
    arr[8] = "I hate__.";
    arr[9] = "Dang man,\n___";
    arr[10] = "You're \n__.";
    arr[11] = "Dude, you\n __.";
    arr[12] = "Good one\n __!";
    arr[13] = "___\n is due\n today?!";
}

std::string BlackCardList::getBlackCardAt(int index) const {
    if(index > 11)
        return "OUT OF BOUNDS";
    else
        return arr[index];
}