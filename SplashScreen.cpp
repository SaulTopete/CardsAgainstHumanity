//
// Created by Saul Topete on 12/6/20.
//

#include "SplashScreen.h"

SplashScreen::SplashScreen() {
    loadFont();
    initBackground();
    initStartFloat();
    initTitle();
    initCourseCRN();
    initCoverPhoto();
    initName();
    initStartButton();
}

//Creating Sprite
void SplashScreen::initBackground(){
    background.loadFromFile("Images/pepeCrying.jpg");
    _background.setTexture(background);
}

void SplashScreen::initTitle(){
    title.setString("Cards Against Humanity");
    title.setFont(font);
    title.setCharacterSize(90);
    title.setPosition(450.f, 300.f);
    title.setFillColor(sf::Color::White);
    title.setOutlineColor(sf::Color::Black);
    title.setOutlineThickness(2);
}

void SplashScreen::initCoverPhoto(){
    cardsPhoto.loadFromFile("Images/CardsAgainstHumanityCover.png");
    _cardsPhoto.setTexture(cardsPhoto);
    _cardsPhoto.setScale(0.27, 0.27);
    _cardsPhoto.setPosition(1500, 300);
}

void SplashScreen::initName(){
    name.setString("Saul Topete");
    name.setFont(font);
    name.setPosition(450.f, 400.f);
    name.setFillColor(sf::Color::White);
    name.setOutlineColor(sf::Color::Black);
    name.setOutlineThickness(2.f);
    name.setCharacterSize(80);
}

void SplashScreen::initCourseCRN(){
    crnSemester.setString("CS3A, Fall 2020");
    crnSemester.setFont(font);
    crnSemester.setPosition(450.f, 500.f);
    crnSemester.setFillColor(sf::Color::White);
    crnSemester.setOutlineColor(sf::Color::Black);
    crnSemester.setOutlineThickness(2.f);
    crnSemester.setCharacterSize(80);
}

void SplashScreen::initStartButton(){
    start.setString("START");
    start.setFont(font);
    start.setPosition(800.f, 700.f);
    start.setFillColor(sf::Color::Cyan);
    start.setOutlineColor(sf::Color::Black);
    start.setOutlineThickness(2.f);
    start.setCharacterSize(110);
}

void SplashScreen::initStartFloat() {
    startFloat = start.getGlobalBounds();
}

void SplashScreen::loadFont() {
    font.loadFromFile("Fot/Arial.ttf");
}

sf::Sprite SplashScreen::getCoverPhoto() const{
    return _cardsPhoto;
}

sf::Text SplashScreen::getName() const{
    return name;
}

sf::Text SplashScreen::getSemesterStuff() const{
    return crnSemester;
}

sf::Text SplashScreen::getStartButton() const{
    return start;
}

sf::Text SplashScreen::getTitle() const{
    return title;
}

sf::Sprite SplashScreen::getBackground() const{
    return _background;
}

sf::FloatRect SplashScreen::getStartBounds() const{
    return startFloat;
}



