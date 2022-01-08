//
// Created by Saul Topete on 12/7/20.
//

#include "WhiteCardList.h"

WhiteCardList::WhiteCardList() {
    createArr();
}

void WhiteCardList::createArr() {

    arr[0] = "Ebay";
    arr[1] = "Hydro\nFlasks";
    arr[2] = "Batman";
    arr[3] = "LeBron \nJames";
    arr[4] = "PTSD";
    arr[5] = "CS3A";
    arr[6] = "Children";
    arr[7] = "Men";
    arr[8] = "Wendy's";
    arr[9] = "SFML";
//    arr[10] = "Airpods";
//    arr[11] = "Big \nweiner";
//    arr[12] = "Project";
//    arr[13] = "Mouse";
//    arr[14] = "Keyboard";
//    arr[15] = "Wife's \nSister";

}

std::string WhiteCardList::getWhiteCardAt(int index) const {
    if(index > 9)
        return "OUT OF BOUNDS";
    else
        return arr[index];
}

//This will randomize the white cards to be out of order so that the stack
//can be drawn in a random order
//void WhiteCardList::randomizeWhite() {
//
//}