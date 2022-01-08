//
// Created by Saul Topete on 12/7/20.
//

#ifndef FINALPROJECT_DRAWCARD_H
#define FINALPROJECT_DRAWCARD_H

#include <SFML/Graphics.hpp>
#include <iostream>

class DrawCard {
public:
    DrawCard();
    void updateWhiteCard1(std::string text);
    void updateWhiteCard2(std::string text);
    void updateBlackCard(std::string text);
    void updateRightCounter(int num);
    void updateLeftCounter(int num);

    sf::RectangleShape getWhite1Card() const;
    sf::RectangleShape getWhite2Card() const;
    sf::RectangleShape getBlackCard() const;
    sf::Text getWhite1Text() const;
    sf::Text getWhite2Text() const;
    sf::Text getBlackText() const;
    sf::Text getG() const;
    sf::Text getH() const;
    sf::Sprite getWallpaper() const;
    sf::Text getLeftNum() const;
    sf::Text getRightNum() const;

private:
    //functions
    void createWhiteCard1();
    void createWhiteCardText1();
    void createWhiteCard2();
    void createWhiteCardText2();
    void createBlackCard();
    void createBlackCardText();
    void createWallpaper();
    void createG();
    void createH();
    void createRightText();
    void createLeftText();
    void loadFont();

    //variables
    sf::RectangleShape whiteCard1;
    sf::RectangleShape whiteCard2;
    sf::RectangleShape blackCard;
    sf::Texture background;
    sf::Sprite _background;

    sf::Text wText1;
    sf::Text wText2;
    sf::Text bText;
    sf::Text g;
    sf::Text h;
    sf::Text leftnum;
    sf::Text rightNum;

    sf::Font font;

};


#endif //FINALPROJECT_DRAWCARD_H
