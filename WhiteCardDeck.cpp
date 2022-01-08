//
// Created by Saul Topete on 12/7/20.
//

#ifndef FINALPROJECT_WHITECARDDECK_CPP
#define FINALPROJECT_WHITECARDDECK_CPP

#include "WhiteCardDeck.h"

WhiteCardDeck::WhiteCardDeck() {
    head = nullptr;
    current = nullptr;
    temp = nullptr;

}

void WhiteCardDeck::addNode(std::string item) {
    nodePtr ptr = new Node;
    ptr->next = nullptr;
    ptr->data = item;

    if(head != nullptr){
        current = head;
        while (current->next != nullptr){
            current = current->next;
        }
        current->next = ptr;
    }
    else{
        head = ptr;
    }
}

void WhiteCardDeck::deleteNode(std::string item) {
    nodePtr deletePtr = nullptr;
    temp = head;
    current = head;

    while (current != nullptr && current->data != item){
        temp = current;
        current = current->next;
    }
    if(current == nullptr){
        std::cout << "Not in white deck/linked list\n";
        delete deletePtr;
    }
    else{
        deletePtr = current;
        current = current->next;
        temp->next = current;
        delete deletePtr;
        std::cout << "Removed value in white card deck.\n";
    }
}

void WhiteCardDeck::deleteNode(int index) {
    nodePtr deletePtr = nullptr;
    temp = head;
    current = head;
    int count = 0;

    while (count != index){
        temp = current;
        current = current->next;
        count++;
    }
        deletePtr = current;
        current = current->next;
        temp->next = current;
        delete deletePtr;
        std::cout << "Removed value in white card deck.\n";
    }

std::string WhiteCardDeck::getNode(std::string item) {
    current = head;

    while(current != nullptr && current->data != item){
        temp = current;
        current = current->next;
    }
    if(current == nullptr){
        std::cout << "Not in deck";
    }
    else{
        return current->data;
    }

}

std::string WhiteCardDeck::getNode(int index) {
    current = head;
    int count = 0;

    while (count != index){
        current = current->next;
        count++;
    }

    return current->data;
}


#endif
