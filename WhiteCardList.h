//
// Created by Saul Topete on 12/7/20.
//

#ifndef FINALPROJECT_WHITECARDLIST_H
#define FINALPROJECT_WHITECARDLIST_H

#include <iostream>

class WhiteCardList {
public:
    WhiteCardList();
    std::string getWhiteCardAt(int index) const;

    //TODO
    void randomizeWhite();

private:
    void createArr();
    std::string arr[20];
};


#endif //FINALPROJECT_WHITECARDLIST_H
