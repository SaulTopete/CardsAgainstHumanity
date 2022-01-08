//
// Created by Saul Topete on 12/9/20.
//

#ifndef FINALPROJECT_BLACKCARDLIST_H
#define FINALPROJECT_BLACKCARDLIST_H

#include <iostream>

class BlackCardList {
public:
    BlackCardList();
    std::string getBlackCardAt(int index) const;

    //TODO
    void randomizeBlack();

private:
    void createArr();
    std::string arr[20];
};


#endif //FINALPROJECT_BLACKCARDLIST_H
