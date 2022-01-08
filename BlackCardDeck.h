//
// Created by Saul Topete on 12/9/20.
//

#ifndef FINALPROJECT_BLACKCARDDECK_H
#define FINALPROJECT_BLACKCARDDECK_H
#include "iostream"

class BlackCardDeck {
private:
    typedef struct Node{
        std::string data;
        Node* next;
    }*nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    BlackCardDeck();
    void addNode(std::string item);
    void deleteNode(std::string item);
    void deleteNode(int index);
    std::string getNode(std::string item);
    std::string getNode(int index);
};


#endif //FINALPROJECT_BLACKCARDDECK_H
