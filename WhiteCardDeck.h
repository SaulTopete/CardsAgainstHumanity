//
// Created by Saul Topete on 12/7/20.
//

#ifndef FINALPROJECT_WHITECARDDECK_H
#define FINALPROJECT_WHITECARDDECK_H
#include <iostream>

class WhiteCardDeck{
private:
    typedef struct Node{
        std::string data;
        Node* next;
    }*nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    WhiteCardDeck();
    void addNode(std::string item);
    void deleteNode(std::string item);
    void deleteNode(int index);
    std::string getNode(std::string item);
    std::string getNode(int index);
};

#endif //FINALPROJECT_WHITECARDDECK_H
