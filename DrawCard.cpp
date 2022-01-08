//
// Created by Saul Topete on 12/7/20.
//

#include "DrawCard.h"

DrawCard::DrawCard(){
    loadFont();
    createWhiteCard1();
    createWhiteCardText1();
    createWhiteCard2();
    createWhiteCardText2();
    createBlackCard();
    createBlackCardText();
    createH();
    createG();
    createWallpaper();
    createLeftText();
    createRightText();
}

//Updating Text for Cards

void DrawCard::updateBlackCard(std::string text) {
    bText.setString(text);
}

void DrawCard::updateWhiteCard1(std::string text) {
    wText1.setString(text);
}

void DrawCard::updateWhiteCard2(std::string text) {
    wText2.setString(text);
}

void DrawCard::updateLeftCounter(int num) {
    leftnum.setString(std::to_string(num));
}

void DrawCard::updateRightCounter(int num) {
    rightNum.setString(std::to_string(num));
}

sf::Text DrawCard::getBlackText() const {
    return bText;
}

sf::Text DrawCard::getWhite1Text() const {
    return wText1;
}

sf::Text DrawCard::getWhite2Text() const {
    return wText2;
}

sf::RectangleShape DrawCard::getBlackCard() const {
    return blackCard;
}

sf::RectangleShape DrawCard::getWhite1Card() const {
    return whiteCard1;
}

sf::RectangleShape DrawCard::getWhite2Card() const {
    return whiteCard2;
}



//***CREATING CARDS***
//Black Card creation
void DrawCard::createBlackCard() {
    blackCard.setSize(sf::Vector2f(400, 600));
    blackCard.setFillColor(sf::Color::Black);
    blackCard.setOutlineThickness(2);
    blackCard.setOutlineColor(sf::Color::Blue);
    blackCard.setPosition(sf::Vector2f(1300, 200));
}

void DrawCard::createBlackCardText() {
    bText.setString("");
    bText.setCharacterSize(30);
    bText.setPosition(sf::Vector2f(1390, 450));
    bText.setFont(font);
    bText.setFillColor(sf::Color::White);
}

//White Card 1 creation
void DrawCard::createWhiteCard1() {
    whiteCard1.setSize(sf::Vector2f(400, 600));
    whiteCard1.setFillColor(sf::Color::White);
    whiteCard1.setOutlineThickness(2);
    whiteCard1.setOutlineColor(sf::Color::Black);
    whiteCard1.setPosition(sf::Vector2f(150, 200));
}

void DrawCard::createWhiteCardText1() {
    wText1.setString("");
    wText1.setCharacterSize(50);
    wText1.setPosition(sf::Vector2f(280, 450));
    wText1.setFont(font);
    wText1.setFillColor(sf::Color::Black);
}

//White Card 2 creation
void DrawCard::createWhiteCard2() {
    whiteCard2.setSize(sf::Vector2f(400, 600));
    whiteCard2.setFillColor(sf::Color::White);
    whiteCard2.setOutlineThickness(2);
    whiteCard2.setOutlineColor(sf::Color::Black);
    whiteCard2.setPosition(sf::Vector2f(650, 200));
}

void DrawCard::createWhiteCardText2() {
    wText2.setString("");
    wText2.setCharacterSize(50);
    wText2.setPosition(sf::Vector2f(725, 450));
    wText2.setFont(font);
    wText2.setFillColor(sf::Color::Black);
}

void DrawCard::loadFont() {
    font.loadFromFile("/System/Library/Fonts/Supplemental/Arial.ttf");
}

//create background, G, and H,

void DrawCard::createWallpaper() {
    background.loadFromFile("Images/pepeWallpaper.jpg");
    _background.setTexture(background);
}

void DrawCard::createG() {
    g.setFillColor(sf::Color::White);
    g.setFont(font);
    g.setOutlineColor(sf::Color::Black);
    g.setOutlineThickness(3);
    g.setPosition(sf::Vector2f(280, 800));
    g.setString("Press G");
    g.setCharacterSize(40);
}

void DrawCard::createH() {
    h.setFillColor(sf::Color::White);
    h.setFont(font);
    h.setOutlineColor(sf::Color::Black);
    h.setOutlineThickness(3);
    h.setPosition(sf::Vector2f(780,800));
    h.setString("Press H");
    h.setCharacterSize(40);
}

void DrawCard::createLeftText() {
    leftnum.setFillColor(sf::Color::White);
    leftnum.setFont(font);
    leftnum.setCharacterSize(60);
    leftnum.setOutlineThickness(3);
    leftnum.setPosition(300, 100);
    leftnum.setOutlineColor(sf::Color::Black);
}

void DrawCard::createRightText() {
    rightNum.setFillColor(sf::Color::White);
    rightNum.setFont(font);
    rightNum.setCharacterSize(60);
    rightNum.setOutlineThickness(3);
    rightNum.setPosition(800, 100);
    rightNum.setOutlineColor(sf::Color::Black);
}

sf::Text DrawCard::getG() const {
    return g;
}

sf::Text DrawCard::getH() const {
    return h;
}

sf::Sprite DrawCard::getWallpaper() const {
    return _background;
}

sf::Text DrawCard::getRightNum() const {
    return rightNum;
}

sf::Text DrawCard::getLeftNum() const {
    return leftnum;
}

